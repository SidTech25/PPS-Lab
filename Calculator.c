#include<stdio.h>
int main(){
    float a,b,add,sub,mul,div;

    printf("Enter first number:\t ");
    scanf("%f",&a);

    printf("Enter second number:\t ");
    scanf("%f",&b);

    add = a + b;
    printf("Sum: %f\n", add);

    sub = a - b;
    printf("Difference: %f\n", sub);

    mul = a * b;
    printf("Product: %f\n", mul);

    div = a / b;
    printf("Quotient: %f\n", div);

    return 0;
}
