#include<iostream>
#include<vector>

using namespace std;

class Node{
	int data;
public:
	Node(int data){
		data = data;
	}
	void display(){
		cout<<"Darshan" <<endl;
	}

};

struct idea{
	int data;
	struct node * llink;
	struct node * rlink;
};





int main(){
	Node node(10);
	node.display();
	vector<string> vtr(100);

	
	return 0;
}