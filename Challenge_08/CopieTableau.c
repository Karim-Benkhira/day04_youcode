#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

void CopieTableau(int TabOr[],int Tabcopy[],int t)
{
    for (int i = 0; i < t; i++)
    {
        Tabcopy[i] = TabOr[i];
    }
}

void AfficherTableau(int Tab[],int t)
{
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

    int TabOr[t],TabCopy[t];

    LireElement(TabOr,t);
    CopieTableau(TabOr,TabCopy,t);

    printf("Tableau original : \n");
    AfficherTableau(TabOr,t);
    printf("Tableau copié : \n");
    AfficherTableau(TabCopy,t);

    return 0;
}