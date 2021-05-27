#include <stdio.h>
#include <stdlib.h>
#include "Quiz_Terminal.h"
#include "QuizCalcScores.h"

int main(int argc, char* argv[])
{

    FILE* fichier = NULL;
    
    unsigned int recharger = 0, total = 0, passer = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0;
    int user[50] = {0};
    
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0;
    
    

    do
    {
        
        PRENOM()
        scanf("%s", user);
        
        do
        {
            N2()
            LIGNE()
                N1()
                NQ1()
                N1()
                LIGNE()
                N2()
                scanf("%d", &a);
                
        }while(a != 2);
            
            CLS()
            
            do
            {
                N2()
                    LIGNE()
                    N1()
                    NQ2()
                    N1()
                    LIGNE()
                    N2()
                    WRITE_HERE()
                    scanf("%d", &b);
                if(b != 6)
                {
                    N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                }
                if else(b = 6)
                {
                    N2()
                        LIGNE()
                        N1()
                        T_GA()
                        N1()
                        LIGNE()
                        N2()
                        LIGNE()
                        N1()
                        WRITE_HERE()
                        scanf("%d", &passer);
                        N1()
                        LIGNE()
                        N2()
                }
                    
            }while(b != 6);
            
            CLS()
                
                do
                {
                    N2()
                        LIGNE()
                        N1()
                        NQ3()
                        N1()
                        LIGNE()
                        N2()
                        scanf("%d", &c);
                    if(c != 8)
                    {
                    N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                    }
                    if else(c = 8)
                    {
                        N2()
                        LIGNE()
                        N1()
                        T_GA()
                        N1()
                        LIGNE()
                        N2()
                        LIGNE()
                        N1()
                        WRITE_HERE()
                        scanf("%d", &passer);
                        N1()
                        LIGNE()
                        N2()
                    }
                    
                }while(c != 8);
        
        CLS()
            
            do
            {
                N2()
                    LIGNE()
                    N1()
                    NQ4()
                    N1()
                    LIGNE()
                    N2()
                
            }while(d != 9);
                
                CLS()
                
                do{}while();
        
        CLS()
            
            do{}while();
        
        CLS()
            
            do{}while();
        
        CLS()
            
            printf("Le resultat du score de la question numero 1 est de %d", a_score);
            printf("Le resultat du score de la question numero 2 est de %d", b_score);
            printf("Le resultat du score de la question numero 3 est de %d", c_score);
            printf("Le resultat du score de la question numero 4 est de %d", d_score);
        printf("Le resultat du score de la question numero 5 est de %d", e_score);
        printf("Le resultat du score de la question numero 6 est de %d", a2_score);
        printf("Le resultat du score de la question numero 7 est de %d", b2_score);
        printf("Le resultat du score de la question numero 8 est de %d", c2_score);
        printf("Le resultat du score de la question numero 9 est de %d", d2_score);
        printf("Le resultat du score de la question numero 10 est de %d", e2_score);

        N2()
        printf("%s, veuillez rentrer votre score de la 1ere question sur 10 : ", user);
          scanf("%d", &r1);

        N2()
        printf("%s, veuillez rentrer votre score de la 2eme question sur 10 : ", user);
          scanf("%d", &r2);

        N2()
        printf("%s, veuillez rentrer votre score de la 3eme question sur 10: ", user);
          scanf("%d", &r3);

        N2()
        printf("%s, veuillez rentrer votre score de la 4eme question sur 10 : ", user);
          scanf("%d", &r4);
        
        N2()
            printf("%s, veuillez rentrer votre score de la 5eme question sur 10 : ", user);
        scanf("%d", &r5)
        
        CLS()
        
        fichier = fopen("BaseDeDonnee.txt", "w");

        total = r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8 + r9 + r10;

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
                    T_FINALE()
                }
            break;
                
                case 99:
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
                    T_FINALE()
                }
            break;
                
                case 98:
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
                    T_FINALE()
                }
            break;
                
                case 97:
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
                
                case 96:
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
                    T_FINALE()
                }
            break;
                
                case 95:
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
                    T_FINALE()
                }
            break;
                
                case 94:
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
                    T_FINALE()
                }
            break;
                
                case 93:
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
                    T_FINALE()
                }
            break;
                
                case 92:
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
                    T_FINALE()
                }
            break;
                
                case 91:
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
                    T_FINALE()
                }
            break;
                
                case 90:
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
                    T_FINALE()
                }
            break;
                
                case 89:
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
                    T_FINALE()
                }
            break;
                
                case 88:
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
                    T_FINALE()
                }
            break;
                
                case 87:
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
                    T_FINALE()
                }
            break;
                
                case 86:
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
                    T_FINALE()
                }
            break;
                
                case 85:
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
                    T_FINALE()
                }
            break;
                
                case 84:
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
                    T_FINALE()
                }
            break;
                
                case 83:
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
                    T_FINALE()
                }
            break;
                
                case 82:
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
                    T_FINALE()
                }
            break;
                
                case 81:
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
                    T_FINALE()
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
                
            case 79:
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
                
                            case 78:
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
                
                            case 77:
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
                
                            case 76:
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
                    printf("Le score total de %s est de %d sur 100", user, total);
                N1()
                    printf("Ce score est tres mauvais.");
                CLS()
                    fichier = fopen("BaseDeDonnee.txt", "a+");
                if(fichier != NULL)
                {
                    T_ENTREE
                        CLS()
                        fprintf(fichier, "Le score de votre partie est de %d sur 100", total);
                }
                break;
                
            case 10:
                N2()
                    printf("Le score total de %s est de %d sur 100", user, total);
                break;
                
            default:
                printf("ERREUR ! VEUILLEZ RECOMMENCER ...");
                break;
        }

            REFAIRE()
            printf("\nVeuillez ecrire votre choix : ");
          scanf("%d", &recharger);

    }while (recharger);
    END_TASK()
}
