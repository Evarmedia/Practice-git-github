#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 4, b= 8;
	int c; 
	
	c = a & b; 
	printf("a & b : %d\n" , c); 

	c = a | b; 
	printf("a|b : %d\n", c); 

	c = a << 2; 
	printf("a << 2 : %d\n", c);
	
	c = a >> 2; 
	printf("a >> 2 : %d\n", c); 

	c = a ^ b; 
	printf("a >> 2 : %d\n", c);
	
	
	return 0;
}