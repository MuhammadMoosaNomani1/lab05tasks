#include<stdio.h>
int main(){
	int m1, m2, m3, highest;
	
	printf("Enter marks of three students: ");
	scanf("%d %d %d", &m1, &m2, &m3);
	
	highest = (m1 > m2)? ((m1>m3)? m1:m3):((m2>m3)? m2:m3);
	printf("The highest marks is %d\n", highest);
return 0;
}
