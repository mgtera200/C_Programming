/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */
 /*
 Write a program that reads a positive integer and
checks if it is a perfect square.
 */
#include "stdio.h"
#include "math.h"

int main()
	{
	    int num;
	    int iVar;
	    float fVar;

	    printf("Enter an integer number: ");
	    fflush(stdout);
	    fflush(stdin);
	    scanf("%d",&num);

	    fVar=sqrt(num);
	    iVar=fVar;

	    if(iVar==fVar)
	        printf("%d is a perfect square.",num);
	    else
	        printf("%d is not a perfect square.",num);

	    return 0;
	}

