#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
float a,b,c,d;
float sum;
int main()
{
                printf("entrez quatre nombre entier \n ");
                scanf("%f %f %f %f",&a, &b,&c,&d);
                sum=a+b+c+d;
                printf("la somme est: %.3f \n", sum);
                printf("la moyenne est %.3f", sum/4);
                return 0;
                
                
                
}

