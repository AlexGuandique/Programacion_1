/* Generar 5,10,15,20,25,30,35....n*/ 

/* Generar 5,10,15,20,25,30,35....n*/
#include<stdio.h>

int main()
{
    int num = 0,Gen;

         printf("Digite cuantos numeros quiere generar: \n");
         scanf("%i",num);
   

    for (int i = 0; i <= num; i++)
    {
        Gen *=5;
    }
    printf("%i",Gen);
    
    
    
}


/*#include<stdio.h>
int main()
{
  int n,t,i=1;
  printf("\n ingrese la cantidad de terminos que desea generar:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    t=5*i;
    printf("\n%d",t);
  }
  getch();
  return 0;
}*/