#include<iostream>


using namespace std;


int testimony(int weight){

	printf("%d",weight);


}

int main(){


	int name =100;
	testimony(100);
	int * ptr;
	ptr = &name;
	char * test = "Darshan";
	printf("%lu", sizeof(test));

	
	for(char i ='a';i<'z';i++){

		cout<< (int)i <<endl;

	}
/*string tmp = "cat";
char tab2[1024];
strncpy(tab2, tmp.c_str(), sizeof(tab2));
tab2[sizeof(tab2) - 1] = 0;*/





string tmp = "darshan";
char tab2[1024];
strncpy(tab2, tmp.c_str(), sizeof(tab2));

cout<< sizeof(tab2) << endl;
int value=100;
cout<< sizeof(value) <<endl;


for(char i='A';i<'z';i++){
	cout<< (int)i << endl;
}



	return 0;
}


#include<stdio.h>
// Countintarget sort with netargetative numbers
// Array = { -1 , 2,1 , -4}
// Tartargetet = 1

int main(){

	int modexample[] ={1,2 ,3,4, 5};
	int modvalue =3;
	int count =1;

	
	while(sizeof(modexample)>count){
		int temp = modexample[count]%modvalue;
		printf("%d\n",temp);
		count ++;

	}


	int arr[] = {-4,-1, 1,2};
	int tartargetet =1;

	/*int newarray[] ={-4, 2, -1 , -3} 
	-4 -1 = -5
	2 -1 =1
	-1 -1 =0
	-3-1 =-4*/


	for(int i=0;i< sizeof(arr);i++){
		int limit = (i+2)%sizeof(arr);
		for(int j=i+1;j<(i+3);j++){

			//printf("%d\n", j);


		}


	}


}