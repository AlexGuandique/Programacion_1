/* Generar 5,10,15,20,25,30,35....n*/
#include<stdio.h>

int main()
{
    float num,Gen;

         printf("Digite cuantos numeros quiere generar: \n");
         scanf("%.2f",&num);
         printf("%f",num);

    for (int i = 0; i <= num; i++)
    {
        Gen *=5;
        printf("%.2f",Gen);
    }
    getchar();
    
    
    
}