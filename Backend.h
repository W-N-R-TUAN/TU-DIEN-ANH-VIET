#pragma once
#ifndef Backend__h
#define Backend__h

#include<iostream>
#include<fstream>
#include<string>
#include <unordered_map>
#include<fstream>
#include<conio.h>
#include<Windows.h>
#include<map>


using namespace std;
#define M 101
#define Mmean 5

class Word {
protected:
	string word;
	string type;
	string mean;
	string exam;
public:
	Word(string word, string type, string mean, string exam) {
		this->word = word;
		this->type = type;
		this->mean = mean;
		this->exam = exam;
	}
	string getmean() {
		return mean;
	}
	string gettype() {
		return type;
	}
	string getword() {
		return word;
	}
	string getexam() {
		return exam;
	}
};

class HashMap {
	unordered_map<string, Word*> hashmap;
public:
	void put(string key, Word* value) {
		hashmap[key] = value;
	}
	Word* get(string key) {
		return hashmap[key];
	}
	void delete_word(string key) {
		hashmap.erase(key);
	}
	unordered_map<string, Word*>* getmap() {
		return &hashmap;
	}

};

class DictionaryBook { 
	HashMap* words = new HashMap();
public:
	void load_from_file(string path);
	Word insert(string word, string word_type, string meaning, string exam);
	Word delete_word(string word);
	Word search(string search_word);
	Word edit(string word, string new_word, string new_type, string new_meaning, string new_exam);
};

#endif