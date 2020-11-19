#include "libmx.h"

double mx_pow_rec(double n, unsigned int pow){
    return (pow != 0) ? (n*mx_pow_rec(n,pow-1)) : 1;
}
