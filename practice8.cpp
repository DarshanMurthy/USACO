#include<iostream>
#include<vector>
#include<malloc>

using namespace std;

struct Node{
	int data;
	struct Node * llink ;
	struct Node * rlink;

};

void createNode(){

	 newp = (Node *) malloc(sizeof(Node));
	 return newp;

}

void display(struct Node * node){
	node->data=100;
	int sum =0;
	for(int i=0;i<node->data;i++){
		sum = sum + i;
	}
	cout<< sum;
	cout<<"\n";
}




int main(){

	Node * node;
	display(node);
	createNode();




	return 0;
}