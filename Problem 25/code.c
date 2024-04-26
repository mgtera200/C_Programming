/*
Write C Function that converts the any letter from lowercase to
uppercase.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include  <stdlib.h>
void convert(char* character);
int main(){
	char character;
	printf("Enter the character\n");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&character);
	convert(&character);
	printf("%c",character);



	return 0;

}
void convert(char* character){
	*character =(*character) - 32;
}

