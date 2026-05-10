#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(k=4;k<1;k++){
			printf("\t");
		}for(j=5;j>=i;j--){
			printf("*\t");
		}
	printf("\n");
	}
	return 0;
}
