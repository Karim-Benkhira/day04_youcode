#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

int MinimumElement(int Tab[],int t)
{
    int min = Tab[0];
    for (int i = 0; i < t; i++)
    {
        if (Tab[i] < min)
        {
            min = Tab[i];
        }
        
    }
    return min;
}

int main()
{
    int t;
    printf("Enter le nember element : \n ");
    scanf("%d",&t);

    int Tab[t];
    LireElement(Tab,t);
    int min = MinimumElement(Tab,t);

    printf("le Minimum est : %d \n",min);

    return 0;
}