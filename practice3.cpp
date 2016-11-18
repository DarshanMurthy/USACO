#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

struct Node{
	int data;
	struct Node *llink;
	struct Node * rlink;
};

void test(Node * prt){
	int sum=0;
	cout<< prt->data<<endl;
}

void voidtest(vector<int> &vtr){

}




int main(){
	vector < int > vtr(100);
	vector <int> vtrtest[100];

	cout<< vtr.size();
	Node * node;
	Node * ptr = (Node *)malloc(sizeof(Node));
	ptr-> data =100;
	voidtest(vtr);



	

	int sum=0;
	for(int i=0;i<ptr->data;i++){
		sum+=i;
		cout<< sum<<endl;

	}
	test(ptr);


}