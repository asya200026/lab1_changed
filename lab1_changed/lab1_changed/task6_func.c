
#include <stdio.h>
#include <math.h>

double x, result;
void f(void)

{
	result = sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x));
}
