/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Write a program that reads a student grade percentage
and prints "Excellent" if his grade is greater than or equal
85, "Very Good" for 75 or greater; "Good" for 65, "Pass"
for 50, "Fail" for less than 50.
 */
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"

int main()
	{
		char arr[5];
		char grade;
	    printf("Enter your grade percentage\n");
	    fflush(stdout);
	    fflush(stdin);
	    gets(arr);
	    grade =atoi(arr);
	    if(grade >= 85)
	    	printf("Excellent\n");
	    else if(grade < 85 && grade >= 75 )
	    	printf("Very good\n");
	    else if (grade < 75 && grade >= 65)
	    	printf("Good\n");
	    else if (grade < 65 && grade >= 50)
	    	printf("Pass\n");
	    else if(grade < 50 )
	    	printf("Fail :( \n");
	    return 0;
	}

