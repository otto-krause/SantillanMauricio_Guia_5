#include <stdio.h>
#include <stdlib.h>

int main()

{
    int base, exp, num ,pot=1;
    printf("ingrese el numero base\n");
    scanf("%d",&base);
    printf("ingrese el exponente\n");
    scanf("%d",&exp);
    for (num=1;num<=exp;num++)
    {
        pot=pot*base;
    }
    printf("la potencia es %d",pot);
}
