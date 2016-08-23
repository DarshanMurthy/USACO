#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){


	vector <int> vtr(10);

	cout<< vtr.size();

	for(int i =0 ;i<10;i++){
		vtr.push_back(i);
		cout<<vtr[i]<<endl;
	}









	return 0;
}