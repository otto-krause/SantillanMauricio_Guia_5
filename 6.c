#include <stdio.h>
#include <stdlib.h>

int main()

{
    int alumnos, notas=0, contnota;
    float prom=0, promcurso=0;
    for (alumnos=1;alumnos<=30;alumnos++)
    {
        printf("ingrese las 10 notas del alumno %d \n",alumnos);
        for (contnota=1;contnota<=10;contnota++)
        {
            printf("nota %d: ",contnota);
            scanf("%d",&notas);
            prom=prom+notas;

        }
        promcurso=promcurso+prom;
        prom=prom/10;
        printf("el promedio del alumno es %f \n\n",prom);
        prom=0;
    }
    promcurso=promcurso/10;
    printf("el promedio del curso es %f",promcurso);

}
