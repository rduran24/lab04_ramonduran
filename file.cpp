#include "file.h"
#include <iostream>

using namespace std;

File::File(std::string n){
	n = nameOfFile;
	countInFile = 1;
}

void File::setName(string n){
	nameOfFile = n;
	countInFile++;
}

string File::getName() const{
	return nameOfFile;

}

int File::getCount() const{
	return countInFile;

}

void File::increaseCount(){
	countInFile = countInFile+1;
}






