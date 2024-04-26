
/*
Write a program that reads a positive integer and
checks if it is a prime.
*/
#include <stdio.h>
#include <math.h>  // Necessary for the sqrt function


int main() {
   char i;
   int num;
   char flag=0;
   printf("Enter the number you want to check\n");
   fflush(stdout);
   fflush(stdin);
   scanf("%d",&num);
   if(num<2){
	   printf("Not prime number\n");
   	   return 0;
   }
   for(i=2; i<=num/2; i++)
   {
	   if(num%i==0){
		   flag=1;
	   	   break;
	   }

   }
   if(flag==0)
	   printf("Number is prime\n");
   else
	   printf("Number is not prime\n");

    return 0;
}
