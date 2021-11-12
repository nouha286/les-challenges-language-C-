#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

float distance;
float Metre;
float km;
 int main()
 {
 		printf("entrez la distance en mile: " );
 		scanf("%f", &distance);
 		km= distance/1.609;
 		Metre=km*1000;
 		printf("la distance en m est: %.4f", Metre);
 		return 0;
 		
 }
