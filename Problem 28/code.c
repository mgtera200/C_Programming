/*
Write a C Function that swaps the value of two integer numbers
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>


int main()
{
    int var1, var2, temp;
    printf("Enter two integers \n");
    fflush(stdin);
    fflush(stdout);
    scanf("%d%d", &var1, &var2);
    printf("Before Swapping First variable = %d\nSecond variable = %d \n", var1, var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("After Swapping First variable = %d\nSecond variable = %d\n", var1, var2);
    return 0;
}
