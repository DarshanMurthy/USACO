#include<iostream>
#include<stdlib.h>


struct Node{
	int data;
	struct Node * llink;
	struct Node * rlink;
};

using namespace std;

Node * creator(){

	Node * p = (Node * )malloc(sizeof(Node));

	return p;
}




int main(){
	Node * ptr= creator();
	ptr-> data =10;
	cout<< ptr-> data;
	cout<<"\n";


	Node * ptr1 =  creator();
	ptr1->data =100;
	cout<< ptr1->data;



	return 0;


}
