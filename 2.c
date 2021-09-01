#include <stdio.h>
#include <stdlib.h>

int main()

{
    int contador;
    float num, num2, mayor;
    for (contador=1;contador<=15;contador++)
    {
        printf("ingrese el numero %d: ",contador);
        scanf("%f",&num);
        if (mayor<num)
        {
            mayor=num;
        }
        num2=num2+num;
    }
    printf("el total es %f\n",num2);
    num2=num2/15;
    printf("el promedio es %f\n",num2);
    printf("el mayor numero es %f\n",mayor);
}
