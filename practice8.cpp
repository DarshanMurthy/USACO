#include<iostream>
#include<vector>


using namespace std;

struct Node{
	string name;

	struct Node * llink;
	struct Node * rlink;
};





int main(){

	Node node;
	node.name = "darshan";

	cout << node.name <<endl;

	node.llink = NULL;

	

	FILE * fin = fopen("test.in","r");
	vector <string> vtr(10);

	vtr[1]= "darsha";

	for(int i=0;i< 100 ;i++){
		vtr[i] = "h";
	}



	
	return 0;
}