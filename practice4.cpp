#include<iostream>
#include<vector>


using namespace std;


struct name{

	int name;
	char arr[100];

};


int main(){


	vector <int> vtr(10);

	cout<< vtr.size()<<endl;

	for(int i=0;i<10;i++){
		 vtr[i] = i*i;
		 cout<< vtr[i]<<endl;
	}


	//nested
	vector< vector <int> > vtr2(20);

	


	for(int i=9;i>0 ;i--){
		vtr[i] -= vtr[i-1];
		cout<<vtr[i]<<endl;
	}


	int sum=1;

	for(int i=0;i<10;i++){
		sum += i;
	}

	cout<< sum<<endl;


	vector<int> v[10];

	vector<int> v(10);







	return 0;
}