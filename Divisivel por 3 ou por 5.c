#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
	setlocale (LC_ALL, "portuguese") ;
	
	int Numero ;
	
	printf ("\n Digite um n�mero inteiro: ") ;
	scanf ("%d", &Numero);
	
	printf("\n");
	
	if ((Numero % 3 == 0) || (Numero % 5 == 0))	
	{
		printf("\n � divis�vel \n");
	}
		
	if ((Numero % 3 == 0) && (Numero % 5 == 0))
	{
		printf("\n Divis�o simultania n�o � permitida \n") ;
    }
    
	if ((Numero % 3 != 0) && (Numero % 5 != 0))
	{
		printf("\n N�o � divis�vel \n") ;
	}

system ("pause");	
return 0;	
}
