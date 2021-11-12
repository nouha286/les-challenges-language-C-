#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float t;
float F;
int main()
{
	printf("entrez la température en Fahrenheit ");
	scanf("%f", &t);
	F= t*1.8+32;
	printf("la température en degré Celsius est : %.2f", F);
	return 0;
}

