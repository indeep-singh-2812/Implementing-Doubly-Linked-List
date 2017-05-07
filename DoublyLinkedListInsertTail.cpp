// Program to demonstrate the insert operation in doubly linked list. This will demonstrate the insert at end operation.
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
		void InsertAtTail(int);
		void Print();
};

void DoublyLinkedList::InsertAtTail(int data){
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	
	if(head == NULL){
		head = newNode;	
		newNode->next = NULL;
		newNode->prev=NULL;
	} else{
		Node* counter = head;
		while(counter->next != NULL){
			counter = counter->next;
		}
		newNode->prev = counter;
		counter->next = newNode;
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
	
	dll.InsertAtTail(1);
	dll.Print(); //list is : 1
	
	dll.InsertAtTail(2);
	dll.Print(); // list is: 1	2
	
	dll.InsertAtTail(3);
	dll.Print(); // list is: 1	2	3
	
	dll.InsertAtTail(4);
	dll.Print(); // list is: 1	2	3	4
	
	dll.InsertAtTail(5);
	dll.Print(); // list is: 1	2	3	4	5
	
	return 0;
	
}
