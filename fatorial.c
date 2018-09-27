#include <stdio.h>

int main()
{
    int fat, n, cont;
    
    printf("\nEntre com um número: ");
    scanf("%d", &n);
    
    fat = 1;
    for(cont=1;cont<=n;cont++)
    {
        fat *=cont;
    }
    
    printf("\nFat(%d)=%d \n\n", n, fat);
    
    return 0;
}
