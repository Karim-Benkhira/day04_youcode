#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

void reveseTableau(int Tab[],int t)
{
   int swap;

        for (int i = 0; i < t / 2; i++)
        {
            swap = Tab[i];
            Tab[i] = Tab[t - i - 1];
            Tab[t - i - 1] = swap;
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
    printf("Enter un Nember\n");
    scanf("%d",&t);

    int tab[t];

    LireElement(tab,t);
    reveseTableau(tab,t);

    printf("\n---------------------------\n");
    AfficherTableau(tab,t);
    printf("---------------------------\n");

    return 0;

}