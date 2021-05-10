#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
  int a;
  int refaire = 0, score = 8;
  
  int b;
  int refaire2 = 0;
  
  int c;
  int refaire3 = 0;
  
  do
  {
  printf("\t\n\n---------------------------------------------------------------");
  printf("\t\nPrmeière question");
  printf("\t\nQu'elle est la planète la plus proche du soleil ?\n");
  printf("\t\n---------------------------------------------------------------");
  scanf("%d", &a);
  printf("\t\n\nreponse 1 venus\n");
  printf("\t\nreponse 2 mercure\n");
  printf("\t\nreponse 3 mars\n");
  printf("\t\nreponse 4 LaTerre\n");
  printf("Inscrivez votre reponse ici :\n");
  scanf("%d", &b);
  
  switch(b)
  {
    
    case 1:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n------------------------------------------------------\n");
    break;
    
    case 2:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nBonne reponse !\n");
    printf("\t\n------------------------------------------------------\n");
    
    do
  {
  printf("\t\n\n---------------------------------------------------------------");
  printf("\t\ndeuxieme question");
  printf("\t\nQuand la nouvelle france a ete cree ?\n");
  printf("\t\n---------------------------------------------------------------");
  scanf("%d", &a);
  printf("\t\n\nreponse 1 1872\n");
  printf("\t\nreponse 2 1576\n");
  printf("\t\nreponse 3 1723\n");
  printf("\t\nreponse 4 1534\n");
  printf("Inscrivez votre reponse ici :\n");
  scanf("%d", &c);
  
  switch(c)
  {
    
    case 1:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n------------------------------------------------------\n");
    break;
    
    case 2:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n------------------------------------------------------\n");
    break;
    
    case 3:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n-----------------------------------------------------\n");
    break;
    
    case 4:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nBonne reponse !\n");
    printf("\t\n-----------------------------------------------------\n");
    break;
    
    default:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nCeci n'est pas une reponse !\n");
    printf("\t\n-----------------------------------------------------\n");
    
    {while(c != 4);
    
    break;
    
    case 3:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n-----------------------------------------------------\n");
    break;
    
    case 4:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nMauvaise reponse !\n");
    score -= 1;
    printf("\t\n-----------------------------------------------------\n");
    break;
    
    default:
    printf("\t\n\n-----------------------------------------------------\n");
    printf("\t\nCeci n'est pas une reponse !\n");
    printf("\t\n-----------------------------------------------------\n");
    
    {while(b != 2);
    
    printf("\t\tVotre score est de %d sur 8", score);
    printf("\n\n\tSi vous voulez refaire le Quiz, appuyez sur 1, sinon pour sortir appuyez sur 0");
    printf("\n\tInscrivez votre reponse ci-contre : ");
    scanf("%d", &refaire);

    }while(refaire);
    return 0;
}
