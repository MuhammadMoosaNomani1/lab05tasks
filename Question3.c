#include<stdio.h>
int main(){
	 int x = 3, y =5, z =2;
    
    printf("Given values: x=%d, y=%d, z=%d\n\n", x, y, z);
    
    int step1 = y*z;
    printf("Step1: y*z = %d * %d = %d\n", y, z, step1);
    
    int step2 = x + step1;
    printf("Step2: x + y * z = %d + %d = %d\n",  x, step1, step2);
    
    int step3 = step2 > 10;
    printf("Step 3: (x+y*z) > 10 = %d > 10 = %d\n", step2, step3);
    
    int step4 = x - z;
    printf("Step 4: x -z = %d - %d = %d\n", x, z , step4);
    
    int step5 = step4 < y;
    printf("Step 5: (x - z) < y = %d < %d = %d\n", step4, y, step5);
    
    int step6 = step3 && step5;
    printf("Step 6: (x+y*z > 10) && (x-z < y) = %d && %d = %d\n", step3, step5, step6);
    
    int step7= y % z;
    printf("Step7: y %% z = %d %% %d = %d\n", y, z, step7);
    
    int step8 =!step7;
    printf("Step 8: !(y %% z) = !%d = %d\n", step7, step8);
    
    int result = step6 || step8;
    printf("Step 9: Final expression = %d || %d = %d\n", step6, step8, result);
    
    printf("\nFinal result: %d\n", result);
    
}
   
