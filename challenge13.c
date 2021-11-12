#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int a,x,y,z,e,f,g;
int main()
{
	printf("entrez un nombre en décimal \n");
	scanf("%d",&a);
	x=a%8;
	y=(a/8)%8;
	z=((a/8)/8)%8;


	
	e=a%16;
	f=(a/16)%16;
	g=((a/16)/16)%16;
	printf("%d en octal est %d%d%d \n",a,z,y,x);
	printf("%d en hexadecimal est %d%d%d",a,g,f,e);
	

	
	
	
	
	
}
