#include <stdio.h>
int main(){
	int a = 10; 
	float f; 
	double d; 
	char c; 
	
	scanf("%d", &a); 
	printf("%d\n", a); 

	scanf("%f", &f); 
	printf("%f\n", f);
	
	scanf("%f", &f ); 
	printf("you put %f\n", f); 
	
	fflush(stdin);

	scanf("%c", &c); 
	printf("%c" , c);
	
}
