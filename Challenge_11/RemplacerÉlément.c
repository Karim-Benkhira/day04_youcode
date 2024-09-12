#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d: ",i + 1);
        scanf("%d",&Tab[i]);
    }
    
}

void Remplace(int Tab[],int t,int ValeurA,int ValeurN)
{
    for (int i = 0; i < t; i++)
    {
        if(Tab[i] == ValeurA)
            Tab[i] = ValeurN;
    }
    
}

void AfficherT(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",Tab[i]);
    }
    
}

int main()
{
    int t;
    printf("Enter Number \n");
    scanf("%d",&t);

    int valeurA,valeurN;

    int Tab[t];
    LireElement(Tab,t);

    printf("Entrez la valeur a remplacer: ");
    scanf("%d",&valeurA);
    printf("Enter la nouvelle valeur: ");
    scanf("%d",&valeurN);

    Remplace(Tab,t,valeurA,valeurN);

    printf("La valeur apre remplacement :\n");
    AfficherT(Tab,t);

    return 0;
}