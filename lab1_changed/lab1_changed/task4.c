#include <stdio.h>
#include <math.h>

double x, result;
void f();
void main()
{
	printf("x4 = ");
	scanf_s("%lf", &x);
	f();
	printf("f(x) = %.4lf", result);
}

void  f()
{
	result = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));

}

