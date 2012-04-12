#include <stdio.h>

int main(void)
{
    double a,b,c,d,e,f;
    double x,y;

    while ( scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) != EOF ) {
        x = (b*f - c*e) / (b*d - a*e) + 0.0;
        y = (c*d - a*f) / (b*d - a*e) + 0.0;
        printf("%.3lf %.3lf\n", x, y);
    }
    
    return 0;
}
