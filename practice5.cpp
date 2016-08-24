#include<iostream>
#include<vector>

using namespace std;


int variable(&value){
	cout<<value <<endl;
}


int main(){

	vector<string> vtr(10);

	cout<< vtr.size()<<endl;

	int * ptr;


cout<< ptr << endl;

variable(ptr);





}