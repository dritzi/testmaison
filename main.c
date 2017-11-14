#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roulette()
{
    int tirage=rand()%37;

    return tirage;
}
int rouletteRusse()
{
    int tab[6]={0,0,0,0,0,0};
    tab[rand()%6]=1;
}
int main()
{
    srand(time(NULL));
    int nbJetonsRestants=10;
    int nbJetonsJoues=0;
    int vivant=1;
    int resultat;
    int pairOuImpair=50;
    while (vivant)
    {
        while (nbJetonsRestants>0)
        {
            do
            {
                printf("Cb de jetons jouez-vous ? il vous en reste %d \n",nbJetonsRestants);
                scanf("%d",&nbJetonsJoues);
            }
            while (nbJetonsJoues>nbJetonsRestants);
            do
            {
                printf("Jouez-vous pair (0) ou impair (1)");
                scanf("%d",&pairOuImpair);
            }
            while (pairOuImpair<0 || pairOuImpair>1);
            resultat =roulette();
            if (resultat==0 || resultat%2 && !pairOuImpair || !(resultat%2) && pairOuImpair)
            {
                printf("tirage : %d , vous perdez %d jetons\n",resultat,nbJeto