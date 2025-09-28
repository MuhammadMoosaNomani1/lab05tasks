#include<stdio.h>
int main(){
    float attendance;
    char midterm, fee;
    
    printf("Enter your attendance percentage");
    scanf("%f", &attendance);
    
    if(attendance<75) printf("You are not eligible (attendance below 75%%).");
    else { printf("Enter Midterm result (P for Pass, F for Fail)");
    scanf(" %c", &midterm);
    
    if(midterm=='F' || midterm=='f') printf("You are not eligible (failed midterm).\n");
    else if (midterm=='P' || midterm=='p'){ printf("Have you paid the exam fee? (Y for Yes,N for No): ");
    scanf(" %c", &fee);
    
    if(fee=='Y' || fee=='y') printf("You are eligible for the Final Exam.\n");
    else if (fee=='n' || fee=='N') printf("Please clear your dues to appear in the final exam.\n");
    else printf("Invalid input for fee status.\n");}
    else printf("Invalid input for midterm result.\n");
    }
    return 0;
}
