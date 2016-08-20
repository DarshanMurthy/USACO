#include<stdio.h>
#define MAX_LEN 1000


int value(){
	for(int i=0;i<100;i++){
		printf("%d",i);
	}
}








int main(){

	printf("%s","Darshn");
	int array[] = {10,18, -9, 89, 78,34};

	int arr = sizeof(array);

	printf("%d", arr);

	printf("%d\n",MAX_LEN);

	int n= MAX_LEN *100;
	printf("%d",n);
	
	return 0;
}