#include<iostream>


struct node {

};


using namespace std;

struct node
{
	int arr;
	char name;
};

void namechar(char ** name){

	cout<< name[0] <<endl;



}




int main(){

	
	char * name = "darshan";



	namechar(&name);


return 0;
}
