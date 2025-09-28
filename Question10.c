#include <stdio.h>

int main()  {
    char signal;
    int hour, minute;
    
    printf("Enter traffic signal (R/Y/G): ");
    scanf(" %c", &signal);
    
    printf("Enter time in 24-hour format (HH MM)");
    scanf("%d %d", &hour, &minute);
    
    if (signal == 'R' || signal == 'r') {
        if (hour < 22) printf("Stop and wait\n");
        else if (hour >= 22) printf("Stop, but night caution allowed\n");}
        else if (signal == 'Y' || signal == 'y')
            printf("Get Ready\n");
        else if (signal == 'G' || signal == 'g')
            printf("Go\n"); 
             else printf("Invalid Signal\n");
    return 0; 
               }

