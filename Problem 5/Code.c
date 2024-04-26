/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program to print the ASCII value of a character
input by the user.
*/
#include "stdio.h"
#include "math.h"

int main(){
	char input=0;
	printf("Enter charac\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&input);
	printf("Ascii is %d",input);
}
