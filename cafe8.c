#include <stdio.h>
int main()
{
    float cand1=0, cand2=0;
    int voto;
    char continuar;
    
    do
      {
        printf("\nEntre com voto");
        printf("\n*Lula-1");
        printf("\n*Bolsonaro-2\n");
        scanf("%d", &voto);
        
        if(voto == 1)
            cand1++;
        else if (voto == 2)
            cand2++;
            
        printf("\ndeseja continuar(s/n)? ");
        scanf("%c", &continuar);
        
      }
    while(continuar == 's' || continuar == 'S');
    
    printf("\nvotos do candidato 1 = %.2f%%", 
                     (cand1/(cand1+cand2))*100 );
    printf("\nvotos do candidato 2 = %.2f%%", 
                     (cand2/(cand1+cand2))*100 );
    
    system("pause");
    return 0;
}
