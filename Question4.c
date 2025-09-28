#include<stdio.h>
#include<math.h>
int main(){
	double radius, area, circumference, root;
	
	printf("Enter the radius of the tank");
	scanf("%lf", &radius);
	
	area = M_PI * radius * radius;
	circumference = 2 * M_PI * radius;
	
	root = sqrt(radius);
	
	printf("\n---CIRCLE PROPERTIES---\n");
	printf("Area %.2f\n", area);
	printf("Circumference %.2f\n", circumference);
	printf("Square Root of radius = %.2f\n", root);
	
	return 0;
}
