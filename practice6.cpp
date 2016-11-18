#include<iostream>
#include<stdlib.h>
#include<vector>

struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;
};

struct NodeTest{
	int data;

};

using namespace std;


int main(){
	Node * node = (Node *) malloc(sizeof(Node));
	NodeTest* node1 = (NodeTest *) malloc(sizeof(NodeTest));
	vector<int> vtr(100);
	vector< vector < int > > vtrtses;
	for(int i=0;i< vtr.size();i++){
		vtr[i] = i+1;
	}
	node1-> data= 100;
	cout<< node1->data<<endl;




	cout<< vtr[7] <<endl;




	node->data =100;
	cout<< node->data;



	return 0;
}