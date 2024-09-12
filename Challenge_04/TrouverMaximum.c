#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d \n",i + 1);
        scanf("%d",&Tab[i]);
    }
}

int MaxElement(int Tab[],int t)
{
    int Max = Tab[0];

    for (int  i = 1; i < t; i++)
    {
        if (Tab[i] > Max)
        {
            Max = Tab[i];
        }
    }
    return Max;
}

int main()
{
    int t;

    printf("Enter le nember element : \n ");
    scanf("%d",&t);

    int Tab[t];
    int max;

    LireElement(Tab,t);
    max = MaxElement(Tab,t);

    printf("Max Element est : %d\n",max);
    return 0;
}