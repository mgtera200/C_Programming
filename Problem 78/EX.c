#include <stdio.h>
#include <string.h>

int main (){
	float degrees[10];
	int i;
	for(i=0; i<10; i++)
	{
		printf("\nEnter student number %d degree:", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &degrees[i]);
	}
	for (i=0; i<10; i++)
	{
	printf("\nStudent %d degree is: %f\r\n",i+1 ,degrees[i]);
	}








}
