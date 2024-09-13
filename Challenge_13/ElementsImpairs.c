#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d: ",i + 1);
        scanf("%d",&Tab[i]);
    }
    
}

void elementImpairs(int Tab[],int t)
{
    printf("Les éléments impairs dans le tableau sont :\n");

    for (int i = 0; i < t; i++)
    {
        if (Tab[i] % 2 != 0)
        {
            printf("%d\n",Tab[i]);
        }
        
    }
    
}

int main()
{
    int t;
    printf("Enter Number \n");
    scanf("%d",&t);

    int Tab[t];
    LireElement(Tab,t);
    elementImpairs(Tab,t);

    return 0;
}