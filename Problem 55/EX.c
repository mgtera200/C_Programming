#include <stdio.h>
#include <string.h>

int main (){
	float matrix1[2][2];
	float matrix2[2][2];
	int c,r;
	float sum=0;
	printf("\nEnter the elements of 1st matrix");
	for (r=0; r<2; r++){
		for(c=0; c<2; c++){
			printf("\nEnter a%d%d:",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&matrix1[r][c]);
		}
	}
	printf("\nEnter the elements of 2st matrix:");
	for (r=0; r<2; r++){
			for(c=0; c<2; c++){
				printf("\nEnter a%d%d:",r+1,c+1);
				fflush(stdout); fflush(stdin);
				scanf("%f",&matrix2[r][c]);
			}
		}
printf("Sum of matrix:\n");
for (r=0; r<2; r++){
			for(c=0; c<2; c++){
				sum=matrix1[r][c]+matrix2[r][c];
				printf("%f\t",sum);
				if(c==1)
					printf("\r\n");
			}
		}

}
