#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float t;
float c;
int main()
{
	printf("entrez la temp�rature en fahrenheit  ");
	scanf("%f", &t);
	c= (t-32)/1.8;
	
	 	
	if ( c <= 0  )
	{
	printf("tr�s froid");
	}
	else if (c>0 && c<=15 )
{

	 printf("froid");
}
	 else if ((c>15) && (c<=30 ))
	 {
	 
	 printf("chaud");
	}
	 

	else if (30<c ) 
	{
	
	printf("tr�s chaud");
	}
	 else
	 
	 {
	
	 printf("inexiste");
    }
	return 0;
}
