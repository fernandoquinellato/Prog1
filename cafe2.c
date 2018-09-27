#include <stdio.h>
int main()
{
   {
     int cont, soma, media;
     for(cont=1;cont<=100;cont++)
     soma=0;
     soma+=cont;
     media=soma/100;
   } 
  printf("\n %d", media);
  system("pause");
  return 0;
}   
