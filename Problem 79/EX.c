#include <stdio.h>
#include <string.h>

int main (){
	float x[]={5,16,22,3.5,15};
	float y[]={142,1330,2488,73.75,1172};
	int i;
	for (i=0; i<5; i++)
	{
		fflush(stdout); fflush(stdin);
		printf("y(%f)=%f\r\n", x[i], y[i]);
	}








}
