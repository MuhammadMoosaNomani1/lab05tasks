#include<stdio.h>
int main(){
    int sectionChoice;
    int coffeeQty;
    char size, type;
    float price = 0.0, total, discount = 0.0;
    
    printf("Welcome to our Restaurant!\n");
    printf("Choose section: \n");
    printf("1. Coffee Shop\n");
    printf("2. Burger Hub\n");
    printf("3. Ice Cream Parlour\n");
    printf("Enter your choice (1-3):");
    scanf(" %d", &sectionChoice);
    
    if (sectionChoice==2) printf("Your order will be handled by Burger Hub section. \n");
    else if (sectionChoice == 3) printf("Your order will be handled by Ice Cream Parlour section.\n");
    else if (sectionChoice==1) { 
        printf("\nWelcome to Coffee Shop!\n");
        printf("(Choose Coffee Size (S=Small, M=Medium, L=Large)");
        scanf(" %c", &size);
        
        if (size == 's' || size == 'S') price=150.0;
        else if (size=='M' || size =='m') price=200.0;
        else if (size=='L' || size=='l') price=250.0;
        else { 
            printf("Invalid Size selected.\n");
        return 0;
        }
        
        printf("How many coffees do you want?");
        scanf(" %d", &coffeeQty);
        if (coffeeQty > 1){ printf("Check our combo offers!\n");
        discount = 0.10;}

        printf("Choose Coffee Type(R=Regular, C=Cappuccino, L=Lattee):");
        scanf(" %c", &type);
        
        if (type=='C' || type=='c') price+=20;
        else if (type=='L' || type=='l') price+=30;
        else if (type=='R'|| type=='r') price+=0;
        else { printf("Invalid Coffee Type.\n");
        return 0; }
        
        total=price*coffeeQty;
        if (discount>0) total=total-(total*discount);
        printf("\n===Final Bill===\n");
        printf("Coffee Size: %c\n", size);
        printf("Coffee Type: %c\n", type);
        printf("Quantity: %d\n", coffeeQty);
        printf("Total Amount:  PKR %.2f\n", total);
        
    }
        
        else printf("Invalid Section Choice\n");
        
    return 0;
}

