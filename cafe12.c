#include <stdio.h>
int main()
{
    int cont, tabuada, resultado;
      printf("\nInsira um numero de um a dez");
      scanf("%d", &tabuada);
     
    for(cont=0;cont<=10;cont++)
      {
      	resultado=tabuada*cont;
      	printf("\n%d*%d=%d", tabuada, cont, resultado);
	  }

  system("pause");
  return 0;
    
}
