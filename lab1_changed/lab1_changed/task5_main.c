
#include <stdio.h>
#include <math.h>

double f(double x);
void main()
{
	double x;
	printf("x = ");
	scanf_s("%lf", &x);
	printf("f(x) = %.4lf", f(x));
}
