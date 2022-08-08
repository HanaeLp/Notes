#include <stdio.h>
#include <stdlib.h>

float tab1[],tab2[],tab3[];

float calcul(int e, int d)
{
    int M,P=0,i,j,k,u;
    float A[e],tmp;
    for(i=1; i<= e; i++)
    {
        printf("Donner la moyenne de eleve numero %d dans la classe %d:\n", i,d);
        scanf("%f", &A[i]);
        while(A[i] < 0 || A[i] > 20)
        {
            printf("Erreur la moyenne doit entre entre 0 et 20\n");
            printf("Donner la moyenne de eleve numero %d dans la classe %d:\n", i,d);
            scanf("%f", &A[i]);
        }
    }
    for(i=1; i<=e-1; i++)
    {
        M = i;
        for(j= i+1; j<=e; j++)
        {
            if(A[M] > A[j])
            {
                M = j;
            }
        }
        if(M!= i)
        {
            tmp = A[i];
            A[i] = A[M];
            A[M] = tmp;
        }
    }

    for(i=1; i<=e; i++)
    {
        printf("%f\t", A[i]);
        if(A[i] >= 10)
        {
            P++;
        }
    }
    printf("\nla plus grande moyenne dans ce classe est %f\n", A[e]);
    printf("la plus petite moyenne dans ce classe est %f\n", A[1]);
    printf("le nombre des eleves a obtenu une moyenne superieur ou egale 10 de ce classe est : %d\n", P);

    for(i=1; i<=e; i++)
    {
        if(e == 3)
        {
            tab1[i] = A[i];
        }
        if(e == 5)
        {
            tab2[i] = A[i];
        }
    }

    for(i = 1; i <= 3; i++)
    {
        tab3[i] = tab1[i];
    }
    k = i;
    for(j = 1; j <= 5; j++)
    {
        tab3[k] = tab2[j];
        k++;
    }
  /*  for(i=1; i<=k-1; i++)
    {
        M = i;
        for(j= i+1; j<=k; j++)
        {
            if(tab3[M] > tab3[j])
            {
                M = j;
            }
        }
        if(M!= i)
        {
            tmp = tab3[i];
            tab3[i] = tab3[M];
            tab3[M] = tmp;
        }
    }*/
    if(d == 2)
    {
        printf("A la fin de semester :\n");
        for(u = 1; u <= k; u++)
        {
            printf("%f",tab3[u]);
        }
    }

    return e;

}

float classe(int a, int b)
{
    int K;
    if(a == 1)
    {
        K = b;
    }
    else if(a == 2)
    {
        K = b;
    }
    calcul(K, a);
    return a;
}

int main()
{
    int A,B,i;
    for(i=1; i<=2; i++)
    {
        printf("Entrer 1 pour saisir les moyennes de classe 1, ou 2 pour le classe 2 :\n", i);
        scanf("%d", &A);
        while(A != 1 && A != 2 )
        {
            printf("Erreur!!\nEntrer 1 pour saisir les moyennes de classe 1, ou 2 pour le classe 2 :\n", i);
            scanf("%d", &A);
        }
        printf("Entrer le nombre des eleves :\n", i);
        scanf("%d", &B);
        classe(A,B);
    }
}
