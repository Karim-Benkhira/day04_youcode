#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

int RechercheunElement(int Tab[],int t,int element)
{
    for (int i = 0; i < t; i++)
    {
        if (Tab[i] == element)
        {
            return 1;
        }
        
    }
    return 0;
    
}

int main()
{
    int t,element;

    printf("Enter le nember element : \n");
    scanf("%d",&t);

    int Tab[t];
    LireElement(Tab,t);

    printf("Entrez l'élément à rechercher: \n");
    scanf("%d",&element);

    if (RechercheunElement(Tab,t,element))
        printf("L'élément %d est présent dans le tableau.\n",element);
    else
        printf("L'élément %d n'est pas présent dans le tableau.\n",element);
    
    return 0;
}