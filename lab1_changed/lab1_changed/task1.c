#include <stdio.h>
#include <math.h>

void main()
{
    double x1, f, x = 5;
    printf("x = %.4lf\n", x);
    printf("f = %.4lf\n\n", sin(4 * x) / (1 + cos(4 * x)) * cos(2 * x) / (1 + cos(2 * x)));
    printf("x = ");
    scanf_s("%lf", &x1);
    printf("f = %.4lf", sin(4 * x1) / (1 + cos(4 * x)) * cos(2 * x1) / (1 + cos(2 * x1)));
}
