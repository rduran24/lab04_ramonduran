#ifndef _BAG_H
#define _BAG_H

#include <string>
#include "word.h"


class Bag{

	//Word container[LIMIT];
	Doubly_Linked_List<Word> *DllWords;
public:
	Bag() {
		DllWords==NULL;
		}



	//To add word with the respective file from which it came
	void addWord(string s , string nameOfFile);

	//Need to return all files that contain certain word above threshold
	void printWordSearchCount(string w, int threshold);

	//Need to return all files that contain either word inserted
	void printWordSearchUnion(string word1, string word2);
};

#endif


