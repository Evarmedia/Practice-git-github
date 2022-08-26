#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{ 
	char vowel, choice;
	
	do 								// here we use do while on a switch statement to repeat the process
	{
	fflush(stdin); // clears the buffer memory for user input
	
	printf("Enter a letter : "); // prints a prompt
	scanf("%c", &vowel); 		// scanf takes user input and stores in &vowel 
	
		switch (vowel)			// switch statement 
		{
	
		case 'a': 				// case1
		case 'A':
			printf("%c is a vowel", vowel);	// statement;
			break;							// important
		
		case 'e':
		case 'E':
			printf("You entered a vowel");
			break;
			
		case 'i': 
		case 'I': 
			printf("You entered a vowel"); 
			break;
			
		case 'o': 
		case 'O': 
			printf("You entered a vowel");
			break;
			
		case 'u':
		case 'U': 
			printf("You entered a vowel");
			break;
			
		default: 							// if cases are not true, default executes
			printf("You entered a consonant");
			break;
			
		} 
		fflush(stdin); // flushes the memory
		
		printf (" \n\n Do you want to check another?...Y/n? \n ");
		scanf("%c", &choice); // scans
		
	}while(choice == 'y'|| choice == 'Y'); // while condition in do-while;
	
	return 0;	
}
		
	