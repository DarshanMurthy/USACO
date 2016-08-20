#include<stdio.h>

void fact(int N){
	fact(N-1);
}


int main(){


	fact(100);





	printf("%s","Hello");
	int value=10;





	for(int i=0;i<100;i++){
	
		printf("%d",i&1);
		printf("\n");
		
	}



	int value= {10,19,18};

	for(int i=0;i<3;i++){
		printf("%d", value[i]);
	}

}