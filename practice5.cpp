#include<iostream>
#include<vector>

struct Node{
	int data;
	struct Node * llink;
	struct Node * rlink;
};

int main(){
	struct Node * ptr;
	ptr->data =100;
	cout<< ptr->data;



	return 0;
}