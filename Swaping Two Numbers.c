#include<stdio.h>
int main() {
	int a,b,c;
	
	printf ("Enter number a: ");
	scanf("%d",&a);
	
	printf ("Enter number b: ");
	scanf("%d",&b);
	
	printf("Values before swapping a=%d,b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
    printf("values after swapping a=%d,b=%d\n",a,b);
    
	return 0;
}
