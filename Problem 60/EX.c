/*
 * main.c
 *
 *  Created on: Apr 7, 2023
 *      Author: MOHTERA
 */

#include <stdio.h>

int main()
{
	int i;
	int count=0;
	char string[50];
	char ch;
	printf("Enter a string:\n");
	gets(string);
	printf("Enter a character to find frequency:");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&ch);
	for(i=0; string[i]!='\0'; i++)
	{
		if(string[i]==ch)
			++count;
	}

	printf("frequency of %c = %d",ch ,count);
	return 0;
}
