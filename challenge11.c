#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
float lar;
float lang;
float cir;
int main()
{
printf("entrez la longueur du rectangle \n");
scanf("%f", &lang);
 
printf("entrez la largeur du rectangle \n");
scanf("%f", &lar);
 
cir=2*(lang+lar);
printf("la circonférence du rectangle est :%.3f", cir);
return 0;
}
 

