
#include <stdio.h>
#include <stdlib.h>

typedef struct trojkat{
    float bok1;
    float bok2;
    float bok3;
}T;

void f(T troj1, T *troj2)
{
    troj2->bok1=troj1.bok1;
    troj2->bok2=troj1.bok2;
    troj2->bok3=troj1.bok3;
}

int main()
{
    return 0;
}
