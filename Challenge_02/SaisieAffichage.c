#include <stdio.h>

void LireElements(int tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d:",i+1);
        scanf("%d",&tab[i]);
    }
    
}

void afficherElements(int tab[],int t)
{
    printf("Les éléments du tableau sont :\n");

    for (int i = 0; i < t; i++)
    {
        printf("%d\n",tab[i]);
    }
    
}

int main()
{
    int t;
    printf("Entrez le nombre d'éléments du tableau : \n");
    scanf("%d",&t);

    int tab[t];

    LireElements(tab,t);
    afficherElements(tab,t);

    return 0;
}
