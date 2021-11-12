#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float t;
float c;
int main()
{
	printf("entrez la température en degre Celsius ");
	scanf("%f", &t);
	c= (t-32)/1.8;
	printf("la température en Fahrenheit : %.2f", c);
	return 0;
}
