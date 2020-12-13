#include "bag.h"
#include "word.h"
#include "dnode.h"
#include <iostream>

using namespace std;
//To add word with the respective file from which it came
	void Bag::addWord(string s , string nameOfFile){
		DllWords->addLex(s, nameOfFile);
	}


//Need to return all files that contain certain word above threshold
	void Bag::printWordSearchCount(string w, int threshold){
		Word* current=DllWords->(Doubly_Linked_List()->front);

		while(current->next != NULL){
			while((current->next)->next !=NULL){
				if((current->next)->next).getCount()>=threshold){
					cout<<(current->next)->next)).getName()<<endl;
				}
			}
		}
	}

	//Need to return all files that contain either word inserted
	void Bag::printWordSearchUnion(string word1, string word2){
		Word* current=DllWords->(Doubly_Linked_List()->front);

		while(current->next != NULL){
			if (current.getWord()==word1 ||current.getWord()==word2){
				while((current->next)->next !=NULL){
				cout<<((current->next)->next).getName()<<endl;
			}
			}
		}
	}




