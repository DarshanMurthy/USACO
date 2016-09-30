#include<iostream>

using namespace std;

struct node{
	int data;
	struct node * llink ;
	struct node * rlink;

};

class student{
	int node;
	int arr[100];
	struct node{
		int data;
		struct node * llink;
		struct node * rlink;

	};

public:
	student(int node){
		node = node;
	}
	void note(char * name){
		cout<< "node" <<endl;
		cout << name <<endl;

	}



	void testdata(){

	}

};

int main(){


student Student(1);
char * name = "darsahn";
Student.note(name);







	return 0;
}