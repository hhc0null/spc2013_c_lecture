#include <assert.h>
#include <stdio.h>

double add(double x, double y);
double sub(double x, double y); // 大きいほうから小さい方を引く
double mul(double x, double y);
double div(double x, double y); // ゼロ除算に注意

int main(void)
{
    int mode;
    double x, y;
    double (*calc[])(double, double) = {add, sub, mul, div, NULL};

    scanf("%lf %lf", &x, &y);
    scanf("%d", &mode);

    switch(mode) {
        case 0:
            printf("%f\n", (calc[0])(x, y)); break;
        case 1:
            printf("%f\n", (calc[1])(x, y)); break;
        case 2:
            printf("%f\n", (calc[2])(x, y)); break;
        case 3:
            printf("%f\n", (calc[3])(x, y)); break;
        default:
            break;
    }

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return (x > y)? x - y : y - x;
}

double mul(double x, double y)
{
    return x * y;
}

double div(double x, double y) {
    assert(y != 0);
    return x / y;
}
