#include <stdio.h>

int main()
{
    int c, a, tam;
    
    printf("\nentre com o tamanho do quadrado: ");
    scanf("%d", &tam);
    
    for(c=1;c<=tam;c++){
        for(a=1;a<=tam;a++)
        {
            if(c==1 || c==tam) 
                printf("#");
            else if(a==1 || a==tam)
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
