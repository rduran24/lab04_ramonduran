#include <iostream>
#include <string>

/*
template <class T>

class dnode{

private:
    T data_field;
    //Forward Pointer
    dnode<T>* next;

    //Backward Pointer
    dnode<T>* prev;

    public:
    insert Node

};
*/
template <class T>
struct dnode
{
	
    std::string wordName; //For DLL of Words
    std::string file;

    int data_field; // For DLL of Files (update count )

	dnode<T>* prev;  	// previous node
	dnode<T>* next; 	// next node
};

template <class T>
class Doubly_Linked_List
{
	dnode<T> *front;  	// points to first node of list
	dnode<T> *end;   	// points to first las of list
	public:
	Doubly_Linked_List()
	{
		front = NULL;
		end = NULL;
	}
	
    //Adds node to end of list for file class
    template <class A>
	void add_end(A peram1){
        //Perameter will be of type File

        dnode<T>* current=front;
	dnode<T>* new_node;
        while (current->next != NULL  && (current->next->data_field).getName() != (new_node->data_field).getName() ) { 
                current = current->next;
            }
        if(current->next != NULL){
            // create new node
            dnode<T> *temp;
            temp = new dnode<T>;
            (temp->data_field).setName(peram1);
            temp->prev = end;
            temp->next = NULL;

            // if list is empty
            if(end == NULL){
                front = temp;
                end = temp;
            }
            else
                end->next = temp;	
            end = temp;
            }
        else{
            (current->next->data_field).increaseCount();
        }
        
    }
    template <class B>
    //Adds node to lexigraphically correct spot of list for word class
    void addLex(B w, B nOfFile) { 
        //Make a new node with null pointers
        dnode<T>* new_node;
        new_node = new dnode<T>;
        (new_node->data_field).setWord(w, nOfFile);
        new_node->next = NULL;
        new_node->prev = NULL;

        dnode<T>* current; 
        //Special case for the head end
        if (front == NULL || ((front)->data_field).getWord() >= (new_node->data_field).getWord() ) { 
            new_node->next = front; 
            front->prev=new_node;
            front = new_node; 
        } 
        else { //Locate the node before the point of insertion 
            current = front; 
            while (current->next != NULL  && (current->next->data_field).getWord()  < (new_node->data_field).getWord() ) { 
                current = current->next; 
            }
            if((current->next->data_field).getWord()==(new_node->data_field).getWord() ){
                dnode<T>* new_node=NULL;
                (current->next->data_field).setWord(w, nOfFile);
                return;
            }
            new_node->next = current->next;
            new_node->prev=current;
            current->next = new_node; 
            //if it is inserted at the end of the list 
            if(new_node->next!=NULL){
                new_node->next->prev=new_node;
            }
        } 
    } 



};

