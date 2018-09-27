#include <stdio.h>
int main()
{
 {
 	printf("\n*WHILE*\n");
    int cont=0;
    
    while(cont<10)
    {
      cont++;
      printf("\nLinguagem C");
    }
 }
 
 {
 	printf("\n\n*DO WHILE*\n");
 	int cont=0;
 	
 	do
	 {
	 	printf("\nLinguagem C");
	 	cont++;
	 }
	 
	while(cont<10);
 }
 
 {
 	printf("\n\n*FOR*\n");
 	int cont;
 	
 	for(cont=0;cont<10;cont++)
 	    printf("\nLinguagem C");
 	
 }
 system("pause");
 return 0;
}
