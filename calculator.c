// On inclut la bibliothèque standard d'entrée/sortie
#include <stdio.h>  

// Point d'entrée du programme (obligatoire en C)
int main() {

    // Déclaration des variables :
    // On va stocker les deux nombres que l'utilisateur va entrer
    double nombre1, nombre2;

    // Cette variable va contenir l'opérateur que l'utilisateur tape (+, -, *, /)
    char operateur;

    // Afficher un message pour demander le premier nombre
    printf("Entrez le premier nombre : ");
    scanf("%lf", &nombre1);  // %lf = lecture d'un double ; &nombre1 = adresse mémoire où stocker la valeur

    // Afficher un message pour demander l'opérateur
    printf("Entrez l'operateur (+, -, *, /) : ");
    scanf(" %c", &operateur);  
    // Note : l'espace avant %c évite un bug où le caractère précédent (comme un \n) est lu à la place

    // Afficher un message pour demander le deuxième nombre
    printf("Entrez le deuxieme nombre : ");
    scanf("%lf", &nombre2);

    // Effectuer l'opération selon l'opérateur choisi
    if (operateur == '+') {
        printf("Résultat : %.2lf\n", nombre1 + nombre2);  // %.2lf = affiche 2 décimales
    }
    else if (operateur == '-') {
        printf("Résultat : %.2lf\n", nombre1 - nombre2);
    }
    else if (operateur == '*') {
        printf("Résultat : %.2lf\n", nombre1 * nombre2);
    }
    else if (operateur == '/') {
        // Vérifier si on ne divise pas par 0 (erreur classique en math et en code !)
        if (nombre2 != 0) {
            printf("Résultat : %.2lf\n", nombre1 / nombre2);
        } else {
            printf("Erreur : division par zéro impossible.\n");
        }
    }
    else {
        // Si l'utilisateur a tapé un opérateur invalide
        printf("Erreur : opérateur invalide.\n");
    }

    // Fin du programme
    return 0;
}