#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d: ",i + 1);
        scanf("%d",&Tab[i]);
    }
    
}

void CalculerMoyenne(int Tab[],int t)
{
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum = sum + Tab[i];
    }
    printf("la Moyenne : %d \n",sum / t);
}

int main()
{
    int t;
    printf("Enter Number \n");
    scanf("%d",&t);

    int tab[t];
    LireElement(tab,t);

    CalculerMoyenne(tab,t);

    return 0;
}