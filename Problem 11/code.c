/*
 * mai.c
 *
 *  Created on: Nov 17, 2023
 *      Author: Dell
 */

 /*
 Print sum of first 100 integers. (With data validation)
 */
#include "stdio.h"
#include "math.h"
#include "string.h"
#include "stdlib.h"

int main(){

		int sum=0,i;
		for(i=1;i<=100;i++){
			sum+=i;
		}


		printf("The sum of first 100 integers is %d\n\n",sum);

	return 0;
}

