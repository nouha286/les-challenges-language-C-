#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int age=21;
char nom[20];
char prenom[20];
char sexe[8] ;
long num; 

 int main()
{




	
		printf("entrez votre nom : \n");
		scanf("%s",&nom);
		printf("entrez votre prenom : \n");
		scanf("%s",&prenom);
		
		printf("entrez votre numero \n");
		scanf("%ld",&num);
		
		printf("entez votre age \n"  );
		scanf("%d",&age);
		
		printf("sexe[f/m]\n"  );
	scanf("%s",&sexe);
		
		printf("Bonjour %s %s , tu es agee de %d  \n  sexe= %s \n votre numero de  tel est: %ld", nom, prenom, age, num );
		
		
		
		
	
	
	
	return 0;
	
}
