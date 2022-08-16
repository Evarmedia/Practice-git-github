#include <stdio.h> 
int main() {
	char x[100]; 
	gets(x);
	printf("You entered this: %s ", x ); 
	return 0;
}