#include <stdio.h>
int main()
{
  int a, b, c;
   printf("\nInsira um numero");
   scanf("%d", &a);
   printf("\nVoto facultativo");
   scanf("%d", &b);
   printf("\nVoto facultativo");
   scanf("%d", &c);
   
  if(a>b && a>c)
    printf("\n%d e o maior numero", a);
  else if(b>a && b>c)
    printf("\n%d e o maior numero", b);
  else if(c>a && c>b)
    printf("\n%d e o maior numero", c);
  else
    printf("\n%d,%d,%d sao iguais", a, b, c);
    
 system("pause");
 return 0;
}
