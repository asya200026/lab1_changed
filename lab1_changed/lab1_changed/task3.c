
#include <stdio.h>
#include <math.h>

double f(double x);

void main()
{
	double x = 5;
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
	double x3;
	printf("x3 = ");
	scanf_s("%lf", &x);
	printf("f(x3) = %.4lf", f(x));
}


double f(double x)
{
	double f;
	return sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}
