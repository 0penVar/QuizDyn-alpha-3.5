#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "Quiz_Terminal.h"
#include "QuizCalcScores.h"

int main(int argc, char* argv[])
{

    FILE* fichier = NULL;
    
    unsigned int recharger = 0, total = 0, passer = 0;
    unsigned int r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0;
    unsigned int r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    int user[50] = {0};
    
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    int a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0;
    
    signed short a_score = 10, b_score = 10, c_score = 10, d_score = 10, e_score = 10;
    signed short a2_score = 10, b2_score = 10, c2_score = 10, d2_score = 10, e2_score = 10;
    
    fichier = fopen("BaseDeDonnee.txt", "w");
    
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
                LIGNE()
                N1()
                WRITE_HERE()
                scanf("%d", &a);
            N1()
                LIGNE()
            
            if(a != 2)
            {
                N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                    a_score -= 1;
            }
            if else(a = 2)
            {
                N2()
                        LIGNE()
                        N1()
                        MessageBox(NULL, TEXT("\t-------------------------\t\n\t| Bonne Réponse ! |\t\n\t-------------------------\t"), TEXT("QuizDyn.exe"), MB_OK);
                        N1()
                        LIGNE()
                        N2()
                        LIGNE()
                        N1()
                        PRESS_ANY_KEY()
                        scanf("%d", &passer);
                        N1()
                        LIGNE()
                        N2()
            }
                
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
                    LIGNE()
                    N1()
                    WRITE_HERE()
                    scanf("%d", &b);
                N1()
                    LIGNE()
                
                if(b != 6)
                {
                    N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                        b_score -= 1;
                }
                if else(b = 6)
                {
                    N2()
                        MessageBox(NULL, TEXT("\t-------------------------\t\n\t| Bonne Réponse ! |\t\n\t-------------------------\t"), TEXT("QuizDyn.exe"), MB_OK);
                        LIGNE()
                        N1()
                        PRESS_ANY_KEY()
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
                        WRITE_HERE()
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
                        c_score -= 1;
                    }
                    if else(c = 8)
                    {
                        N2()
                        MessageBox(NULL, TEXT("\t-------------------------\t\n\t| Bonne Réponse ! |\t\n\t-------------------------\t"), TEXT("QuizDyn.exe"), MB_OK);
                        LIGNE()
                        N1()
                        PRESS_ANY_KEY()
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
                        WRITE_HERE()
                        scanf("%d", &d);
                
                if(d != 9)
                    {
                    N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                        d_score -= 1;
                    }
                    if else(d = 9)
                    {
                        N2()
                        MessageBox(NULL, TEXT("\t-------------------------\t\n\t| Bonne Réponse ! |\t\n\t-------------------------\t"), TEXT("QuizDyn.exe"), MB_OK);
                        LIGNE()
                        N1()
                        PRESS_ANY_KEY()
                        scanf("%d", &passer);
                        N1()
                        LIGNE()
                        N2()
                    }
                
            }while(d != 9);
                
                CLS()
                
                do
                {
                    N2()
                        LIGNE()
                        N1()
                        NQ5()
                        N1()
                        LIGNE()
                        N2()
                        WRITE_HERE()
                        scanf("%d", &e);
                    
                    if(e != 3)
                    {
                    N2()
                    LIGNE()
                        N1()
                    T_BA()
                        N1()
                        LIGNE()
                        N2()
                        e_score -= 1;
                    }
                    if else(e = 3)
                    {
                        N2()
                        MessageBox(NULL, TEXT("\t-------------------------\t\n\t| Bonne Réponse ! |\t\n\t-------------------------\t"), TEXT("QuizDyn.exe"), MB_OK);
                        LIGNE()
                        N1()
                        PRESS_ANY_KEY()
                        scanf("%d", &passer);
                        N1()
                        LIGNE()
                        N2()
                    }
                    
                }while(e != 3);
        
        CLS()
            
            do
            {
                
            }while(a2 != );
        
        CLS()
            
            do
            {
                
            }while(b2 != );
        
        CLS()
            
            do
            {
                
            }while(c2 != );
        
        CLS()
            
            do
            {
                
            }while(d2 != );
        
        CLS()
            
            do
            
            printf("Le resultat du score de la question numero 1 est de %i", a_score);
            printf("Le resultat du score de la question numero 2 est de %i", b_score);
            printf("Le resultat du score de la question numero 3 est de %i", c_score);
            printf("Le resultat du score de la question numero 4 est de %i", d_score);
        printf("Le resultat du score de la question numero 5 est de %i", e_score);
        printf("Le resultat du score de la question numero 6 est de %i", a2_score);
        printf("Le resultat du score de la question numero 7 est de %i", b2_score);
        printf("Le resultat du score de la question numero 8 est de %i", c2_score);
        printf("Le resultat du score de la question numero 9 est de %i", d2_score);
        printf("Le resultat du score de la question numero 10 est de %i", e2_score);

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
        scanf("%d", &r5);
            
            N2()
            printf("%s, veuillez rentrer votre score de la 6eme question sur 10 : ", user);
        scanf("%d", &r6);
        
        N2()
            printf("%s, veuillez rentrer votre score de la 7eme question sur 10 : ", user);
        scanf("%d", &r7);
        
        N2()
            printf("%s, veuillez rentrer votre score de la 8eme question sur 10 : ", user);
        scanf("%d", &r8);
        
        N2()
            printf("%s, veuillez rentrer votre score de la 9eme question sur 10 : ", user);
        scanf("%d", &r9);
        
        N2()
            printf("%s, veuillez rentrer votre score de la 10eme question sur 10 : ", user);
        scanf("%d", &r10);
        
        CLS()

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
