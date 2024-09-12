#include <stdio.h>

void initialiserTableau(int tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        tab[i] = i +1;
    }
}

void afficherTableau(int tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("%d\n",tab[i]);
    }
}

int main()
{
    int i = 5;
    int tab[i];

    initialiserTableau(tab,i);
    afficherTableau(tab,i);

    return 0;
}