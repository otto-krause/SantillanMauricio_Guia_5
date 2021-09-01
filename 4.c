#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num, num2, fac=1;
    printf("ingrese el numero\n");
    scanf("%d",&num);
    for (num2=num;num2>=1;num2--)
    {
    fac=num2*fac;
    }
    printf("el factorial de %d es %d",num,fac);
}
