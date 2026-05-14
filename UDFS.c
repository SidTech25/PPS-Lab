
#include <stdio.h>
int sum(int n1, int n2) {
    return n1 + n2;
}

int sub(int n1, int n2) {
    return n1 - n2;
}

int mul(int n1, int n2) {
    return n1 * n2;
}

int div(int n1, int n2) {
    return n1 / n2;
}
int main(){
    int num1,num2,op,ans;
    printf("Enter num1:\t");
    scanf("%d",&num1);
    printf("Enter num2:\t");
    scanf("%d",&num2);
    printf("Enter 1 for sum\nEnter 2 for sub\nEnter 3 for mul\nEnter 4 for div\n");
    scanf("%d",&op);

switch (op) {
        case 1:
            ans = sum(num1, num2);
            break;
        case 2:
            ans = sub(num1, num2);
            break;
        case 3:
            ans = mul(num1, num2);
            break;
        case 4:
            ans = div(num1, num2);
            break;
        default:
            printf("Invalid Input\n");
            return 0;
}   