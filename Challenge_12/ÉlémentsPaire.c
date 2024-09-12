#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d: ",i + 1);
        scanf("%d",&Tab[i]);
    }
    
}

void AfficherElementsPair(int Tab[],int t)
{
    printf("Les éléments pairs : \n");
    for (int i = 0; i < t; i++)
    {
        if(Tab[i] % 2 == 0)
            printf("%d\n",Tab[i]);
    }
    
}

int main()
{
    int t;
    printf("Enter Number \n");
    scanf("%d",&t);

    int Tab[t];
    LireElement(Tab,t);
    AfficherElementsPair(Tab,t);

    return 0;
}