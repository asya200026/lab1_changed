#include <stdio.h>
#include <math.h>


double f(double x)
{

	return sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}


void main()
{
	double x = 5;
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
	printf("x = ");
	scanf_s("%lf", &x);
	printf("f(x) = %.4lf", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
}
