#include <stdio.h>
#include <stdlib.h>
#include "QuizFunct.h"
#include "QuizCalc.h"
#include "QuizDyn1.h"

int main(int argc, char* argv[])
{

    FILE* fichier = NULL;
    
    unsigned int recharger = 0, total = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    int user[50] = {0};
    
    int a = 0, b = 0, c = 0

    do
    {
        do
        {
            
        }while
        
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
        
        CLS()
        
        fichier = fopen()

        total = r1 + r2 + r3 + r4;

        switch(total)
        {
        case 100:
                N2()
            printf("Le score total de %s est de %d sur 100", user, total);
                N1()
            printf("C'est un score excellent !!!");
                fichier = fopen("BaseDeDonnee.txt", "a+");
                if(fichier != NULL)
                {
                    T_ENTREE()
                    system("CLS");
                    fprintf(fichier, "Le score de votre partie est de %d sur 100", total);
                    fclose(fichier);
                    T_FINALE
                }
            break;

        case 80:
                N2()
            printf("Le score total de %s est de %d sur 100", user, total);
                N1()
            printf("C'est un bon score !");
                fichier = fopen("BaseDeDonnee.txt", "a+");
                if(fichier != NULL)
                {
                    T_ENTREE()
                    CLS()
                    fprintf(fichier, "Le score de votre partie est de %d sur 100", total);
                    fclose(fichier);
                    T_FINALE() 
                }
            break;

        case 60:
                N2()
            printf("Le score total de %s est de %d sur 100", user, total);
                N1()
            printf("Ce score est acceptable.");
                CLS()
                fichier = fopen("BaseDeDonnee.txt", "a+");
                if(fichier != NULL)
                {
                    T_ENTREE()
                    CLS()
                    fprintf(fichier, "Le score de votre partie est de %d sur 100", total);
                    fclose(fichier);
                    T_FINALE()
                }
            break;
                
        case 40:
                N2()
                    printf("Le score total de %s est de %d sur 100", user, total);
                N1()
                    printf("Ce score est mauvais.");
                CLS()
                fichier = fopen("BaseDeDonnee.txt", "a+");
                if(fichier != NULL)
                {
                    T_ENTREE()
                        CLS()
                    fprintf(fichier, "Le score de votre partie est de %d sur 200", total);
                    fclose(fichier);
                    T_FINALE()
                }
                break;
                
            case 20:
                N2()
                    printf("")
        }

        printf("\n\nSi vous voulez recalculer, appuyez sur 1, sinon appuyez sur 0");
        printf("\nVeuillez ecrire votre choix : ");
          scanf("%d", &recharger);

    }while (recharger);
    return 0;
}
