// Program to demonstrate the insert operation in doubly linked list. This will demonstrte the insert at beginning operation.
//Author - Indeep Singh
//Date - 05-07-2017

#include<iostream>
#include<string>

using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
};

class DoublyLinkedList{
	private:
		Node* head;
	public:
		DoublyLinkedList(){
			head = NULL;
		}
		void InsertAtBeginning(int);
		void Print();
};

void DoublyLinkedList::InsertAtBeginning(int data){
	Node* newNode = new Node;
	newNode->data = data;
	
	if(head == NULL){
		head = newNode;	
		newNode->next = NULL;
		newNode->prev=NULL;
	} else{
		head->prev = newNode;
		newNode->next = head;
		newNode->prev = NULL;
		head = newNode;
	}
}

void DoublyLinkedList::Print(){
	if(head==NULL){
		cout<<"\n List is empty.";
		return;
	} 
	
	Node* counter = NULL;
	counter = head;
	cout<<"\n List is :";
	while(counter != NULL){
		cout<<" " << counter->data;
		counter = counter->next;
	}
}

int main(){
	DoublyLinkedList dll;
	dll.Print(); // List is empty.
	
	dll.InsertAtBeginning(1);
	dll.Print(); //list is : 1
	
	dll.InsertAtBeginning(2);
	dll.Print(); // list is: 1	2
	
	dll.InsertAtBeginning(3);
	dll.Print(); // list is: 1	2	3
	
	dll.InsertAtBeginning(4);
	dll.Print(); // list is: 1	2	3	4
	
	dll.InsertAtBeginning(5);
	dll.Print(); // list is: 1	2	3	4	5
	
	return 0;
	
}
