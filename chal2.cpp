#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float t;
float F;
int main()
{
	printf("entrez la temp�rature en Fahrenheit ");
	scanf("%f", &t);
	F= t*1.8+32;
	printf("la temp�rature en degr� Celsius est : %.2f", F);
	return 0;
}

