#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	system ("cls");
	
	int A=0;
	int B=0;
	
	printf ("Informe um valor A inteiro: \n");
	
	scanf ("%i", &A);
	
	printf ("Informe um valor B inteiro: \n");
	
	scanf ("%i", &B);
	
		if (A>B)
	{
		printf("A eh maior que B! \n");
	}
	else
	{
		if (A<B)
		{
			printf("B eh maior que A! \n");
		}
		else
		{
			printf("A eh igual a B! \n");
		}
	}
	
	
	
	system ("pause");
	
	
	
	
	
	return 0;
}
