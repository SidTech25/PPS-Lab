#include <stdio.h>

int main() {
    int correct_pin = 1234;      // Correct PIN
    int entered_pin;
    int i;                       // Loop counter
    
    // FOR LOOP - runs 3 times (attempts 1, 2, 3)
    for (i = 1; i <= 3; i++) {
        printf("Enter your PIN: ");
        scanf("%d", &entered_pin);
        
        // IF statement - check if PIN is correct
        if (entered_pin == correct_pin) {
            printf("\n Access Granted!\n");
            printf(" Processing your request...\n");
            break; 
        }
        // ELSE IF statement - check if it's not the last attempt
        else if (i < 3) {
            printf("Incorrect PIN. Try Again\n");
        }
        // ELSE statement - if it's the last attempt
        else {
            printf("Incorrect PIN. This was your last attempt!\n\n");
        }
    }
    if (i <= 3) {
        printf("\n? Your card is active.\n");
    }
    else {
        printf("\n Card Blocked! Too many incorrect attempts.\n");
    }
    printf("Thank You!\n");
    return 0;
    }
    
