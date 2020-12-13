#include "word.h"
#include "file.h"
#include "dnode.h"
#include <iostream>

using namespace std;

//Perameterized Constructor: Need name of word and where it appears
Word::Word(string s, File fileName){
	word=s;
	DllFiles->add_end(fileName);
}
	
//Need name of word and where it appears
void Word::setWord(std::string s, std::string fileName){
	word=s;
	DllFiles->add_end(fileName);
}
	
std::string Word::getWord() const{
	return word;
}

