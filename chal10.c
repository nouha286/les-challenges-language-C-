#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
const float pi=3.14;
float r;
float cir;
int main()
{
printf("entrez la longueur du rayon du cercle \n");
scanf("%f", &r);
cir=2*pi*r;
printf("la circonférence du cercle est :%.3f", cir);
return 0;
}
 

