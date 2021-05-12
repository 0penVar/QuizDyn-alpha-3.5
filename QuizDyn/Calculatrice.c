#include <stdio.h>
#include <stdlib.h>
#include "QuizCalcul.h"

int main(int argc, char* argv[])
{

    unsigned int recharger = 0, total = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    int user[50] = {0};

    do
    {
        printf("\nQuel est votre prenom : ");
        scanf("%s", user);

        printf("\n\n %s, veuillez rentrer votre score de la 1ere question sur 50 : ", user);
          scanf("%d", &r1);

        printf("\n\n %s, veuillez rentrer votre score de la 2eme question sur 50 : ", user);
          scanf("%d", &r2);

        printf("\n\n %s, veuillez rentrer votre score de la 3eme question sur 50: ", user);
          scanf("%d", &r3);

        printf("\n\n %s, veuillez rentrer votre score de la 4eme question sur 50 : ", user);
          scanf("%d", &r4);

        total = r1 + r2 + r3 + r4;

        switch(total)
        {
        case 200:
            printf("\n\nLe score total de %s est de %d sur 200\n", user, total);
            printf("C'est un score excellent !!!");
            break;

        case 160:
            printf("\n\nLe score total de %s est de %d sur 200\n", user, total);
            printf("C'est un bon score !");
            break;

        case 120:
            printf("\n\nLe score total de %s est de %d sur 200\n", user, total);
            printf("Ce score est acceptable.");
        }

        printf("\n\nSi vous voulez recalculer, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez ecrire votre choix : ");
          scanf("%d", &recharger);

    }while (recharger);
    return 0;
}
