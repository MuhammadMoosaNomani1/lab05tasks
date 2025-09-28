#include <stdio.h>
int main() {
    int pin, enteredPIN;
    float balance= 5000.00;
    float withdraw;
    
    pin = 1234;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPIN);
    
    if (enteredPIN==pin){ printf("Enter withdrawal amount:");
    scanf("%f", &withdraw);
    
    if (withdraw > balance){ printf("Insufficient Balance\n");
    } else { balance -= withdraw;
    printf("Transaction Successful!\n");
    printf("Remainning Balance: %.2f\n", balance); } }
    else printf("Incorrect PIN\n"); 
    return 0;
}

