#include <stdio.h>
int main()

{
	int n1, n2, fibonacci, contador, numero ;
	n1 = 0;
	n2 = 1;

	 printf("\nEntre com um numero:");
	 scanf("%d", &numero);
	 printf("%d\n", n2);
	
	for( contador = 0 ; contador < numero ; contador ++ )
	{
		fibonacci = n1 + n2;
		n1 = n2;
		n2 = fibonacci;
		printf("\n %d", fibonacci);
	}
	
   system("pause");
   return 0;	
}
