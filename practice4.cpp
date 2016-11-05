#include<iostream>

#include<stdlib.h>

struct Node{
	int data;
	struct Node * llink;
	struct Node * rlink;

};

using namespace std;

Node * creator(){
	Node * ptr = (Node *) malloc(sizeof(Node));
	return ptr;

}

void display(){

}



int main(){
	struct Node * node;
	node->data;
	Node * ptr =creator();
	ptr->data=100;
	




}