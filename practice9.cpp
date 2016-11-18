#include<iostream>
#include<vector>

using namespace std;

struct Node{
	int data;
	struct Node * llink;
	struct Node * rlink;
};


int main(){
	vector<int> v;
	Node * ptr;

	vector< vector <int> > Matrix;


	for(int i=0;i<100;i++){
		v.push_back(i);
	}
	for(int j=0;j<10;j++){
		cout<<v[j];
		cout<<'\n';
	}
	
	
	

	





	return 0;
}