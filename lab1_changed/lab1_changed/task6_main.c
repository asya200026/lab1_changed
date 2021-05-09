#include <stdio.h>
#include <math.h>


double x, result;
void f(void);
void main()
{

	printf("x = ");
	scanf_s("%lf", &x);
	f();
	printf("f(x) = %.4lf", result);
}
