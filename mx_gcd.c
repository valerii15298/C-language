#include "libmx.h"

int mx_gcd(int a, int b){
    if (a==0 && b==0)
        return 2147483647;
    if(a < 0)
        a*=-1;
    if(b < 0)
        b*=-1;
    return (b==0) ? a : mx_gcd(b, a%b);
}
