#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

void TableauenOrdreCroissant(int Tab[],int t)
{
    int swap;

    for (int i = 0; i < t - 1; i++)
    {
        for (int j = 0; j < t - i -1 ; j++)
        {
            if(Tab[j] > Tab[j + 1])
            {
                swap = Tab[j];
                Tab[j] = Tab[j + 1];
                Tab[j + 1] = swap;
            }
        }
        
    }
    
}

void AfficherTableau(int Tab[],int t)
{
    printf("Le tableau trié en ordre croissant est :\n");
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",Tab[i]);
    }
    
}

int main()
{
    int t;
    printf("Enter le nember element : \n");
    scanf("%d",&t);

    int Tab[t];
    LireElement(Tab,t);

    TableauenOrdreCroissant(Tab,t);
    AfficherTableau(Tab,t);

    return 0;
}