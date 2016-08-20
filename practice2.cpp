#include<stdio.h>




int main(){

	int arr[] = {10,23 ,45};
	int N = sizeof(arr);
	int n = sizeof(arr[0]);

	int size = N/n;

	for(int i=0;i< size;i++){
		printf("%d", arr[i]);
	}

	FILE *fin = fopen("test.in","r");
	FILE *fout = fopen("test.out","w");

	  

}