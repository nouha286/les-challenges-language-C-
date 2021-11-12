#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
 
int a, b;
int x, y;
float MN;
int main()
{
               printf("entrez les cordonnés du point M\n");
               scanf("%d %d",&a,&b);
               printf("entrez les cordonnés du point N\n");
               scanf("%d %d",&x,&y);
               MN=sqrt(pow(x-a,2)+ pow(y-b,2));
               printf("la distance est : %.2f",MN);
               
               return 0;
               
                
 }

