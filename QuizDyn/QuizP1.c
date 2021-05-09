#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    int a = 0;
    int refaire = 0, score = 8;

    int b;
    int refaire2 = 0;

    int c;
    int refaire3 = 0;


        do
        {
        printf("\n\n\t-------------------------------------------------");
        printf("\n\n\t\t\tStart(appuyez sur 1) : ");
        scanf("%d", &b);
        printf("\n\t-------------------------------------------\n");
        printf("\n\tQuestion N1\n\tQuand Minecraft a ete cree ?\n");
        printf("\n\t-------------------------------------------\n");

        do
        {
            printf("\n\treponse 1: 2009\n");
            printf("\n\treponse 2: 2011\n");
            printf("\n\treponse 3: 2007\n");
            printf("\n\treponse 4: 2006\n");
            printf("\n\tIncrivez la reponse ici : ");
            scanf("%d", &a);

            switch(a)
            {
                case 1:
                printf("\n\t-------------------------------------------\n");
                printf("\n\tMauvaise reponse !\n");
                score -= 1;
                printf("\n\t-------------------------------------------\n");
                break;

                case 2:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nBonne reponse !\n");
                printf("\t\n-------------------------------------------\n");

                    do
                    {
            printf("\n\t-------------------------------------------\n");
            printf("\n\tQuestion N1\n\tQu'elle est le mellieur jeux du monde ?\n");
            printf("\n\t-------------------------------------------\n");

            do
            {
            printf("\n\treponse 1: five night at freddy's\n");
            printf("\n\treponse 2: QuizDyn-alpha-3.5\n");
            printf("\n\treponse 3: Hello Neighbor\n");
            printf("\n\treponse 4: 2006\n");
            printf("\n\tIncrivez la reponse ici : ");
            scanf("%d", &c);

                switch(c)
                {
                case 1:
                printf("\n\t-------------------------------------------\n");
                printf("\n\tBonne reponse !\n");
                printf("\n\t-------------------------------------------\n");
                break;

                case 2:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nMauvaise reponse !\n");
                score -= 1;
                printf("\t\n-------------------------------------------\n");
                break;

                case 3:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nMauvaise reponse !\n");
                score -= 1;
                printf("\t\n-------------------------------------------\n");
                break;

                case 4:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nMauvaise reponse !\n");
                score -= 1;
                printf("\t\n-------------------------------------------\n");
                break;

                default:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nCeci n'est pas une reponse !\n");
                printf("\t\n-------------------------------------------\n");
                break;

                }while(c != 1);
                break;

                case 3:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nMauvaise reponse !\n");
                score -= 1;
                printf("\t\n-------------------------------------------\n");
                break;

                case 4:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nMauvaise reponse !\n");
                score -= 1;
                printf("\t\n-------------------------------------------\n");
                break;

                default:
                printf("\t\n-------------------------------------------\n");
                printf("\t\nCeci n'est pas une reponse !\n");
                printf("\t\n-------------------------------------------\n");
                break;

          }while(a != 2);
          printf("\t\tVotre score est de %d sur 8", score);
          printf("\n\n\tSi vous voulez refaire le Quiz, appuyez sur 1, sinon pour sortir appuyez sur 0");
          printf("\n\tInscrivez votre reponse ci-contre : ");
          scanf("%d", &refaire);

    }while(refaire);
    return 0;
    }

