#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num, cont, pos=0, neg=0, cero=0;
    for (cont=1;cont<=10;cont++)
    {
        printf("introduzca el numero %d\n",cont);
        scanf("%d",&num);
        if (num<0)
        {
            neg=neg+1;
        }
        else
        {
            if (num>0)
            {
                pos=pos+1;
            }
            else
            {
                cero=cero+1;
            }
        }
    }
    printf("numeros positivos: %d\nnumeros negativos: %d\nnumeros iguales a cero: %d",pos,neg,cero);
}
