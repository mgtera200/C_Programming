#include <stdio.h>
#include <math.h>
struct Scomplex {
	float real;
	float imaginary;
};
struct Scomplex add_complex (struct Scomplex A,struct Scomplex B)
{
	struct Scomplex R;
	R.real=A.real+B.real;
	R.imaginary=A.imaginary+B.imaginary;
	return R;
}
int main(){
	struct Scomplex X,Y,Z;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout);
	scanf("%f%f",&X.real,&X.imaginary);
	printf("For 2st complex number\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdout);
	scanf("%f%f",&Y.real,&Y.imaginary);
	Z=add_complex(X,Y);
	printf("Sum = %.1f+%.1fi",Z.real,Z.imaginary);
	return 0;
}
