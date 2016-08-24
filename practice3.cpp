#include<iostream>
#include<vector>


using namespace std;


int main(){


	vector<int> vtr(10);
	cout<< vtr.size()<<endl;


	for(int i=0;i<vtr.size();i++){
		vtr[i]= i*i;
		cout<< vtr[i] <<endl;
	}


	




	return 0;
}