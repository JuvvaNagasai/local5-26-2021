
#include <cstdio>


unsigned long int factorial( unsigned long int n ) {
    unsigned long int rc = n;

   
    while(n > 1) {
        rc *= --n;
    }

    return rc;
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
