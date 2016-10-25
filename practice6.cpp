#include<iostream>
#include<vector>

struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;
};

using namespace std;

int main(){
	vector<int> vtr(100);
	cout << vtr.size();

	Node * node;
	node-> data =100;

	cout<< node-> data;


	return 0;
}