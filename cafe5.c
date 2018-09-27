#include <stdio.h>
int main()
{
    int a, b, c;
     printf("\nInforme os tres lados do triangulo");
     scanf("%d",&a);
     printf("\nInforme os tres lados do triangulo");
     scanf("%d",&b);
     printf("\nInforme os tres lados do triangulo");
     scanf("%d",&c);
     
    
    if(a==b && a==c && b==c)
     printf("\nTriangulo equilatero");
     
    else if(a!=b && a!=c && b==c) 
     printf("\nTriangulo isoceles");
    
    else if(b!=a && a==c && b!=c)
     printf("\nTriangulo isoceles");
    
    else if(a==b && a!=c && b!=c)
     printf("\nTriangulo isoceles");
    
    else
     printf("\nTriangulo escaleno");
     system("pause");
     return 0; 
}
