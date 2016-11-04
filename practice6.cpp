#include<iostream>

struct Node{
	int data;
	struct Node * llink;
	struct Node * rrlink;
};

using namespace std;


int main(){
	int v [] ={0,19,2,3,4,5};
	for(auto x:v)
		cout<< x << '\n';




	return 0;
}