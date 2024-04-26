/*
Write a C Function that takes one character and checks if it alphabet
or not.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
int main(){
	char character;
	printf("Enter the character\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&character);
	if((character < 90 && character > 65) || (character < 122 && character > 97))
	{
		printf("the character is an alphabet\n");
	}
	else{
		printf("the character not an alphabet\n");
	}
		return 0;

}
