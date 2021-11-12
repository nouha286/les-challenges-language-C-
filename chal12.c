#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int nombre;
int a,b,c;
 int main()
{
               printf("entrez un nombrede trois chiffre \n");
               scanf("%d", &nombre);
               a=nombre/100;
               nombre=nombre-a*100;
               b=nombre/10;
               nombre=nombre-b*10;
               c=nombre;
               printf("le nombre inversé est %d%d%d",c,b,a);
               
                return 0;
}
 

