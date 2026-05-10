#include<stdio.h>
int main (){
int l,b,A,P;

printf("Enter Length:\t");
scanf("%d",&l);

printf("Enter Breadth:\t");
scanf("%d",&b);

A=l*b;
printf("The Area of Rectangle is %d\n",A);

P=2*(l*b);
printf("The Perimeter of Rectangle is %d",P);

return 0;
}
