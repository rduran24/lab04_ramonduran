#ifndef _FILE_H
#define _FILE_H

#include <string>


//Serves as the node for the DLL implementation in the word.cpp File
class File{
	std::string nameOfFile="";
	int countInFile=0;

public:
	//File() {nameOfFile = ""; countInFile = 0;}

	File(std::string n);

	void setName(std::string a);
	std::string getName() const;
	int getCount() const;
	void increaseCount();
};

#endif
