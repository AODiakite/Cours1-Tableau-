//
//  main.c
//  Cours1
//
//  Created by Diakite on 30/10/2021.
//

#include <stdio.h>

const int Nmax=20;


int main(int argc, const char * argv[]) {
    //Declaration tableau "tab" de taille Nmax
    float tab[Nmax];
    int N=30,i; //Declaration de variables
    do{
    printf("La taille Max du tableau est de %d\n",Nmax);
    printf("Donnez la taille du tableau N= "); //Demande de la taille du tableau
    scanf("%d",&N);//Lecture de la taille du tableau
    }while(N>20);
    printf("Veillez remplire le tableau\n");
    //Demande de remplissage du tableau
    for (i=0; i<N;i++) {
        printf("Donner T[%d]= ",i+1);
        scanf("%f",&tab[i]);
    }
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");//Separateur
    printf("Affichage de tableau :\n");
    //Affichage du tableau de taille N
    for (i=0; i<N; i++) {
        printf("|| %.1f ",tab[i]);
    }
   
    return 0;
}

