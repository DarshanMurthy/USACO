#include<stdio.h>

int main(){
	
	int arr[] = {10,19,13,45,23};
	int N = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<N/2;i++){
		printf("%d", arr[i]);
		printf(" ");
	}

	printf("\n");

	N = N/2;

	printf("%d", arr[N]);


	printf("%s","\n");

	int  * arr = {10,18};

	printf("%d", sizeof(arr));







	return 0;
}