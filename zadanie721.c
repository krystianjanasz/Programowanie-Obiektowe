
#include <stdio.h>
#include <stdlib.h>

typedef struct troj{
    float bok1;
    float bok2;
    float bok3;
}T;

float obwod(T trojkat)
{
    return trojkat.bok1+trojkat.bok2+trojkat.bok3;
}
int main()
{
    T trojkat={3,4,5};
    printf("%.2f",obwod(trojkat));
    return 0;
}
