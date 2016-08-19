#include<stdio.h>

int main(){


	printf("Test");
	int arr[] = {10,19,23};

	int n = sizeof(arr)/sizeof(arr[0]);

	FILE *fin = fopen("test.in","r");

	FILE *fout = fopen("test.out","w");

	printf(fin, "%d", &a);

	for(int i =n-1;i>=0;i--){
		printf("%d", arr[i]);
		printf("\n");
	}





}