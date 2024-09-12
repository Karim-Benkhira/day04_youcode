#include <stdio.h>

void LireElement(int  Tab[],int t)
{
    for (int  i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d :",i+1);
        scanf("%d",&Tab[i]);
    }
}

int caclulSome(int Tab[],int t)
{
    int Some = 0;

    for (int  i = 0; i < t; i++)
    {
        Some = Some + Tab[i];
    }
    return Some;
}

int main()
{
    int t;
    printf("Enter t : \n");
    scanf("%d",&t);

    int Tab[t];
    int Some;
    LireElement(Tab,t);
    Some = caclulSome(Tab,t);
    printf("La some est : %d \n",Some);

    return 0;
}