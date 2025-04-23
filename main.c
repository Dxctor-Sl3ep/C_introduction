#include <stdio.h>
#include <stdbool.h>
int tableau() {
    int tab[8]={1,25,78,4,56,6,71,8};
    for (int i=0;i<8;i++) {
        printf("%d\n",tab[i]);
    }
    return 0;
}

int grand() {
    int tab[8]={1,25,78,4,56,6,71,8};
    int max;
    max = tab[1];
    for (int i=0;i<8;i++) {
        if (tab[i]>max) { max = tab[i]; }

    }
    printf("le max est : %d\n", max);

}

int exist() {
    int tab[8]={1,25,78,4,56,6,71,8};
    bool existe = false;
    int x = 56;  //numéro à chercher
    for (int i=0;i<8;i++) {if (tab[i] == x) {existe = true;}}
    if (existe == true){printf("le chiffre %d existe  \n", x );}
    else {printf("le chiffre %d n'existe pas \n", x );}
}

int sapin() {
    int hauteur;
    printf("entrez votre hauteur >>> ");
    scanf("%d", &hauteur);
    for (int i = 0; i < hauteur; i++) {
        int espace = hauteur-i-1;
        int etoile = 2 * i + 1;
        for (int j = 0; j < espace; j++) {
            printf(" ");
        }
        for (int j = 0; j < etoile; j++) {
            printf("*");
        }
        printf("\n");
    }
    int tronc = hauteur - 2;
    for (int i = 0; i < tronc; i++) { printf(" ");}
    printf("| |\n");
}

int main() {
    tableau();
    grand();
    exist();
    printf("Hello, World!\n");
    sapin();
    return 0;
}
