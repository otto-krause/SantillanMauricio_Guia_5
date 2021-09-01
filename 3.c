#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num, num2;
    printf("ingrese el primer numero \n");
    scanf("%d",&num);
    printf("ingrese el segundo numero \n");
    scanf("%d",&num2);
    printf("los numeros intermedios son:\n");
    for (num=num+1;num<num2;num++)
    {
    printf("%d\n",num);
    _sleep(600);
    }
}
