#include<stdio.h>
// Counting sort with negative numbers
// Array = { -1 , 2,1 , -4}
// Target = 1

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
	int target =1;

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