#include <stdio.h>
#include <stdlib.h>
#include "QuizCalcul.h"
#include "QuizDyn1.h"

int main(int argc, char* argv[])
{

    FILE* fichier = NULL;
    
    unsigned int recharger = 0, total = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    int user[50] = {0};
    
    unsigned int recharger2 = 0, total

    do
    {
        PRENOM()
        scanf("%s", user);

        N2()
        printf("%s, veuillez rentrer votre score de la 1ere question sur 50 : ", user);
          scanf("%d", &r1);

        N2()
        printf("%s, veuillez rentrer votre score de la 2eme question sur 50 : ", user);
          scanf("%d", &r2);

        N2()
        printf("%s, veuillez rentrer votre score de la 3eme question sur 50: ", user);
          scanf("%d", &r3);

        N2()
        printf("%s, veuillez rentrer votre score de la 4eme question sur 50 : ", user);
          scanf("%d", &r4);

        total = r1 + r2 + r3 + r4;

        switch(total)
        {
        case 200:
                N2()
            printf("Le score total de %s est de %d sur 200\n", user, total);
            printf("C'est un score excellent !!!");
                if(fichier != NULL)
                {
                    printf("Lancement de mise a jour de la base de donnnee ...");
                    fichier = fopen("BaseDeDonnee.txt", "a+");
                    fprintf(fichier, "Votre score de votre partie est de %d sur 200", total);
                    fclose(fichier);
                    printf("");
                }
            break;

        case 160:
                N2()
            printf("Le score total de %s est de %d sur 200\n", user, total);
            printf("C'est un bon score !");
                if(fichier != NULL)
                {
                    fichier = fopen("BaseDeDonnee.txt", "a+");
                    
                }
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
