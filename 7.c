#include <stdio.h>
#include <stdlib.h>

int main()

{
    int vend, venta, totalgen=0, mayor=0, mayorven=0;
    for (vend=1;vend<=20;vend++)
    {
        printf("introduzca las ventas diarias del vendedor %d: ",vend);
        scanf("%d",&venta);
        venta=venta*15;
        if (mayor<venta)
        {
            mayor=venta;
            mayorven=vend;
        }
        totalgen=totalgen+venta;
        printf("el total vendido es %d\n\n",venta);
    }
    printf("el total general de todos los vendedores es de %d ventas\n",totalgen);
    printf("el vendedor con mas ventas es el vendedor %d con %d ventas\n",mayorven,mayor);
}
