//
//  main.c
//  Cours1
//
//  Created by Diakite on 30/10/2021.
//

#include <stdio.h>

const int Nmax=20;

int main(int argc, const char * argv[]) {
    float tab[Nmax];
    int N,i;
    printf("Donnez la taille du tableau N= ");
    scanf("%d",&N);
    printf("Veillez remplire le tableau\n");
    for (i=0; i<N;i++) {
        printf("Donner T[%d]= ",i+1);
        scanf("%f",&tab[i]);
    }
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Affichage de tableau :\n");
    for (i=0; i<N; i++) {
        printf("|| %.1f ",tab[i]);
    }
   
    return 0;
}
