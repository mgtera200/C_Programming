#include <stdio.h>

int main() {
	int m = 29;
	printf("address of m : %p\n",&m);
	printf("value of m : %d\n",m);
	int* ab = &m;
	printf("Now ab is assigned with the address of m.\n");
		printf("address of pointer ab : %p\n",ab);
		printf("content of pointer ab : %d\n",*ab);
	*ab = 34;
	printf("the value of m assigned to 34 now\n");
		printf("address of pointer ab : %p\n",ab);
		printf("content of pointer ab : %d\n",*ab);
	*ab = 7;
	printf("The pointer variable ab is assigned with the variable 7 now\n");
		printf("address of pointer ab : %p\n",ab);
		printf("content of pointer ab : %d\n",*ab);

		return 0 ;




}
