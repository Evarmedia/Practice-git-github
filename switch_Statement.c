#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c, num; 
	
	printf("Enter a number......");
	scanf("%d", &c);
	num = c % 2; 
	
		
	switch (num)
	{
	
	case(0): 
	
		printf("you entered an Even Number");
		break;
	

	case (1): 
	
		printf("YOu entered an odd number");
		break;
	
	default:
	
		printf("You entered a letter or special character");
	}
	return 0;
	}