#ifndef _WORD_H
#define _WORD_H

#include <string>
#include "file.h"
#include "dnode.h"

#define LIMIT 10000
//will have a string for name of word and a pointer(linked-list) to files
class Word{
	std::string word;

	Doubly_Linked_List<File> *DllFiles; //= new Doubly_Linked_List();

public:
	//Default Constructor
	Word() {
		word="";
		DllFiles==NULL;
		}
	
	//Perameterized Constructor: Need name of word and where it appears
	Word(string s, File fileName);
	
	//Need name of word and where it appears
	void setWord(std::string s, std::string fileName);
	
	std::string getWord() const;
	
};
#endif
