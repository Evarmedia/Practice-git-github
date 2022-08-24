#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char vowels; 
	printf("Enter a sound...: ");
	scanf("%c", &vowels); /* scanf takes input and stores it into &var address*/
	
	if (vowels == 'a',vowels == 'A', vowels == 'i',vowels == 'I', vowels == 'e',vowels == 'E',vowels == 'o',vowels == 'O', vowels == 'u',vowels == 'U') 
	
	{
		printf("%c is a vowel sound....", vowels);
	}
	else 
	{
		printf("%c is a consonant or special character ", vowels); //else block runs if 'if' is false//
	}
	
	return 0;	
	}
		
	