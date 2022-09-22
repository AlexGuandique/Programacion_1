#include <stdio.h>


int main(){
    int n;
    printf("\t\tBienvenido!\n\n");
    printf("Digita un numero del rango: ");
    scanf("%d", &n);
    printf("\n");
{
            for(int i=0; i<=n; i++){
                for(int k=0; k<n-i; k++){
                    printf(" ");
                }
                for(int k=0; k< i*2+1; k++){
                    printf("*");
                }
            printf("\n");
            }
            for(int i=n-1; i>=1; i--){
                for(int k=0; k<=n-i; k++){
                    printf(" ");
                }
                for(int k=0; k< i*2+1; k++){
                    printf("*");
                }
            printf("\n");
            }
     
    printf("\n");
}
}