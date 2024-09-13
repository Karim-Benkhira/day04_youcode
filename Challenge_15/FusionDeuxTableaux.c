#include <stdio.h>

void LireElement(int Tab[],int t)
{
    for (int i = 0; i < t; i++)
    {
        printf("Entrez l'élément %d: ",i + 1);
        scanf("%d",&Tab[i]);
    }
    
}

void FusionnerTableaux(int Tab1[],int t1,int Tab2[],int t2,int TabF[])
{
    for (int i = 0; i < t1; i++)
    {
        TabF[i] = Tab1[i];
    }

    for (int i = 0; i < t2; i++)
    {
        TabF[t1 + i] = Tab2[i];
    }
    
    
}

void AfficherTableau(int TabF[],int t)
{
    printf("Fusion de Deux Tableaux : \n");

    for (int i = 0; i < t; i++)
    {
        printf("%d\n",TabF[i]);
    }
    
}

int main()
{
    int t1;
    printf("Enter Element 1 : ");
    scanf("%d",&t1);
    int Tab1[t1];
    LireElement(Tab1,t1);

    int t2;
    printf("Enter Element 2 : ");
    scanf("%d",&t2);
    int Tab2[t2];
    LireElement(Tab2,t2);

    int TabF[t1 + t2];
    FusionnerTableaux(Tab1,t1,Tab2,t2,TabF);
    AfficherTableau(TabF,t1 + t2);

    return 0;
}