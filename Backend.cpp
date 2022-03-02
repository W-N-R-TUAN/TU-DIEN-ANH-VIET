#include "Backend.h"


void DictionaryBook::load_from_file(string path) {
	ifstream fi(path);
	string dong;
	string word;
	string word_type;
	string exam;
	string meaning;
	if (fi.is_open()) {
		while (getline(fi, dong)) {
			if (dong == "") continue;
			if (dong.front() == '@') {
				word = dong.substr(1);
				continue;
			}
			if (dong.front() == '*') {
				word_type = dong.substr(1);
				continue;
			}
			if (dong.front() == '-') {
				meaning = dong.substr(1);
				continue;
			}
			if (dong.front() == '+') {
				exam = dong.substr(1);
				Word* newWord = new Word(word, word_type, meaning, exam);
				words->put(word, newWord);
				continue;
			}
		}
		fi.close();
	}
}

Word DictionaryBook::insert(string word, string word_type, string meaning, string exam) {
	Word findWord = search(word);
	if (findWord.getword() == word) return findWord;
	Word* newWord = new Word(word, word_type, meaning, exam);
	words->put(word, newWord);
	unordered_map<string, Word*>::iterator it;
	map<string, Word*> hashmap;
	for (it = words->getmap()->begin(); it != words->getmap()->end(); it++) {
		hashmap[it->first] = it->second;
	}

	ofstream fo("Text.txt");
	for (auto& x : hashmap) {
		if (fo.is_open()) {
			fo << endl;
			fo << "@" << x.second->getword();
			fo << endl;
			fo << "*" << x.second->gettype();
			fo << endl;
			fo << "-" << x.second->getmean();
			fo << endl;
			fo << "+" << x.second->getexam();
		}
	}
	fo.close();
	return findWord;
}

Word DictionaryBook::delete_word(string word) {
	Word findWord = search(word);
	if (findWord.getword() == "Khong tim thay") return findWord;

	words->delete_word(word);

	ofstream fo("Text.txt");
	unordered_map<string, Word*>::iterator it;
	for (it = words->getmap()->begin(); it != words->getmap()->end(); it++) {
		if (fo.is_open()) {
			
			fo << "@" << it->second->getword();
			fo << endl;
			fo << "*" << it->second->gettype();
			fo << endl;
			fo << "-" << it->second->getmean();
			fo << endl;
			fo << "+" << it->second->getexam();
			fo << endl;
		}
	}
	fo.close();
	return findWord;
}

Word DictionaryBook::search(string search_word) {
	Word* findWord = words->get(search_word);
	if (findWord == nullptr) return Word("Khong tim thay", "Khong tim thay", "Khong tim thay", "Khong tim thay");
	return *findWord;
}



Word DictionaryBook::edit(string word, string new_word, string new_type, string new_meaning, string new_exam) {
	Word findWord = search(word);
	if (findWord.getword() == "Khong tim thay") return findWord;
	delete_word(word);
	insert(new_word, new_type, new_meaning, new_exam);
	return findWord;
}
