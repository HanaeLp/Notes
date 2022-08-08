#include <stdio.h>
#include <stdlib.h>

float tab1[],tab2[],tab3[];

float H(int m, float q){
               float A[m];
            int i,j,M,tmp;
    if(q == tab3[m] ){
            tab3[m] = A[m];
    for(i = 1; i<=m-1; i++){
          M = i;
          for(j= i+1; j<=m; j++){
              if(A[M] > A[j]){
                 M = j;
              }
          }
          if(M!= i){
                tmp = A[i];
                A[i] = A[M];
                A[M] = tmp;
            }
        }
    }else{
    for(i = 1; i<=m-1; i++){
          M = i;
          for(j= i+1; j<=m; j++){
              if(A[M] > A[j]){
                 M = j;
              }
          }
          if(M!= i){
                tmp = A[i];
                A[i] = A[M];
                A[M] = tmp;
            }
        }
    }

}

float calcul(int e, int d){
        int M,P=0,i,j,k,u;
    float A[e],tmp;
    for(i=1; i<= e; i++){
       printf("Donner la moyenne de eleve numero %d dans la classe %d:\n", i ,d);
       scanf("%f", &A[i]);
       while(A[i] < 0 || A[i] > 20){
        printf("Erreur la moyenne doit entre entre 0 et 20\n");
        printf("Donner la moyenne de eleve numero %d dans la classe %d:\n", i ,d);
        scanf("%f", &A[i]);
       }
     }
        for(i=1; i<=e; i++){
           H(e, A[i]);
        }

         for(i=1; i<=e; i++){
            printf("%f\t", A[i]);
            if(A[i] >= 10){
                P = P + 1;
            }
        }
        printf("\nla plus grande moyenne dans ce classe est %f\n", A[e]);
        printf("la plus petite moyenne dans ce classe est %f\n", A[1]);
        printf("le nombre des eleves a obtenu une moyenne superieur ou egale 10 de ce classe est : %d\n", P);

        for(i=1; i<=e; i++){
            if(e == 3){
               tab1[i] = A[i];
            }
            if(e == 5){
               tab2[i] = A[i];
            }
        }

        for(i = 1; i <= 3; i++){
           tab3[i] = tab1[i];
        }
        k = i;
        for(j = 1; j <= 5; j++){
            tab3[k] = tab2[j];
            k++;
        }
        for(u = 1; u <= k; u++){
            H(k,tab3[u]);
        }
        if(d == 2){
            printf("A la fin de semester :\n");
          for(u = 1; u <= k; u++){
            printf("%f",tab3[u]);
          }
        }



return e;

}

float classe(int a){
    int K;
    if(a == 1){
        K = 3;
    }else if(a == 2){
        K = 5;
    }
    calcul(K,a);
    return a;
}

int main()
{
    int A,i;
         for(i=1; i<=2; i++){
            printf("Entrer 1 pour saisir les moyennes de classe 1, ou 2 pour le classe 2 :\n", i);
            scanf("%d", &A);
            while(A != 1 && A != 2 ){
                printf("Erreur!!\nEntrer 1 pour saisir les moyennes de classe 1, ou 2 pour le classe 2 :\n", i);
                scanf("%d", &A);
            }
            classe(A);
         }
}
