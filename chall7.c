#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int a,b;
float x; 
int main()
{
                
                printf("entrez deux nombres entiers:\n ");
                scanf("%d %d", &a, &b);
                printf("la somme de %d et %d est: %d \n ",a,b, a+b);
                printf("la soustraction de %d et %d est: %d \n ",a,b, a-b);
                printf("la multiplication de %d et %d est: %d \n ",a,b, a*b);
                x=a/b;
                printf("la division de %d sur %d est: %f \n ",a,b, x);
                printf("le reste du division de %d sur %d est: %d \n ",a,b, a%b);
                return 0;
                
                
                
                
}

