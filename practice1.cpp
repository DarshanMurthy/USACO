#include<stdio.h>

int main(){

	int arr [] = {10,19,83};
	int n = sizeof(arr[0]);
	int N = sizeof(arr);

	int size = N/n;

	for(int i=0;i<size;i++){
		printf("%d\n",arr[i] );
	}

	FILE *fin = fopen("test.in","r");

	FILE * fout = fopen("test.out","w");
	int a, b;
	fscanf(fin, "%d %d", &a, &b);
	printf("%d ,%d", a, b);

	int c = a + b;

	printf("\n");

	printf("%d", c);

	fprintf(fout, "%d\n",c );



}