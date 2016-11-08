#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

struct Node{
	int data;

};


int main(){
	Node * node;
	vector<int> vtr(100);
	vector< vector < int > > vt;

	for(int i=0;i<10 ;i++){
		vtr.push_back(i);
	}
	cout<< vtr.size()<<endl;





	Node * ptr = (Node *) malloc(sizeof(Node));
	ptr->data=100;
	cout<< ptr->data; 









	return 0;
}