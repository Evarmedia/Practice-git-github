#include <stdio.h>
int main(){
	int a; 
	float b; 
	double c; 
	char d; 
	
	puts("Enter the integer value: ");
	scanf("%d", &a);
	printf("This is what you chose: %d\n", a); 
	
	puts("Enter the float value: ");
	scanf("%f", &b); 
	printf("This is what you chose: %f\n", b);

	puts("Enter the duble value: ");
	scanf("%lf", &c); 
	printf("This is what you chose: %lf\n", c); 

	fflush(stdin); 
	
	puts("Enter the a letter: ");
	scanf("%c", &d);
	printf("This is what you chose: %c", d);

	return 0;
}