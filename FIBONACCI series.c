#include <stdio.h>
int main(){
    int n = 10;
	int i;
    int t1 = 0; 
	int t2 = 1;
    int nextTerm;

    printf("First 10 Fibonacci Numbers:\n");

    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);
        
        // Calculate the next term
        nextTerm = t1 + t2;
        
        // Update t1 and t2
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}

