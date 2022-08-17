#include <stdio.h> 
int main(){
	int a; 
	float f; 
	double d;
	char c; 

	scanf("%d", &a); 
	printf("You entered: %d\n", a); 

	scanf("%f", &f); 
	printf("You entered: %f\n", f); 

	scanf("%lf", &d); 
	printf("You entered: %f\n", d); 

	fflush(stdin); 

	scanf("%c", &c); 
	printf("You entered: %c", c);

	return 0;
}