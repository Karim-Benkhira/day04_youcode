#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

void MultiplierElements(int Tab[],int t,int M)
{
    for (int  i = 0; i < t; i++)
    {
        Tab[i] *= M;
    }
    
}

void AfecheElement(int tab[],int t)
{
    printf("Le tableau résultant est :\n");

    for (int  i = 0; i < t; i++)
    {
        printf("%d\n",tab[i]);
    }
    
}

int main()
{
    int t;
    printf("Enter le nember element : \n");
    scanf("%d",&t);

    int tab[t];
    LireElement(tab,t);
    
    int F;
    printf("Entrez le facteur de multiplication:");
    scanf("%d",&F);

    MultiplierElements(tab,t,F);

    AfecheElement(tab,t);

    return 0;
}