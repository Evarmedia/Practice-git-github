#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{ 
	int arr[5] = {56, 94, 42, 12, 49};
	int i, j; 
	printf("Sortint Array \n");
	
	for(i = 0; i<5; i++)
	{
		for(j =0; j<4; j++)
		{
			if(arr[j] > arr[j+1])
			{
				arr[j] ^= arr[j+1]; 
				arr[j+1] ^= arr[j];
				arr[j] ^= arr[j+1];
			}
		}		
	}
	for (i=0; i<5; i++)
	{
		printf("%d : %d \n", i, arr[i]);
	}
	return 0;	
}
		
	