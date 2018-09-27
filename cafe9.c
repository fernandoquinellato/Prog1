#include <stdio.h>
int main()
{
    int id;
     printf("\nDiga a sua idade");
     scanf("%d", &id);
    
    if(id<16)
     printf("\nVoce nao pode votar");
     
    else if (id>=16 && id<=17)
     printf("\nVoto facultativo");
     
    else if(id>=18 && id<=70)
     printf("\nVoto obrigatorio");
     
    else
     printf("\nVoto facultativo");
     
  system("pause");
  return 0;
}
