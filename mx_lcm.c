#include "libmx.h"

int mx_lcm(int a, int b)
{
    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;
    return (a * b) / mx_gcd(a, b);
}
