#include<stdio.h>
int main(){
	
	float D,A,C;
	float pi=3.14;
	
	printf("Enter Diameter: ");
	scanf("%f",&D);
	
	A=pi*D*D/4;
    printf("The Area of Circle is %f\n",A);
    
    C=3.14*D;
    printf("The Circumference of Circle is %f\n",C);
    
    return 0;
}
