#include "biblioteca.h"

void verificaRanking(int quantidade, T_vetores *vetorUtilizado,char dificuldade)
{
    unsigned int pontuacao;
    int recorde;
    int pontuacaoDificuldade;
    int valorErrou;

    if (dificuldade=='F'){
      pontuacaoDificuldade=1;
      valorErrou = 4;
    }
    else
    {
      pontuacaoDificuldade=2;
      valorErrou = 6;
    }
    pontuacao=(pontuacaoDificuldade * 1000) + (((quantidade-(vetorUtilizado->errou))-1) * 100);


    recorde = numero_recorde(pontuacao);
    if (recorde > 0)
    {
        char nome[64] = {0};
        printf("\n\nParab�ns! Voc� quebrou o recorde #%d\n", recorde);
        printf("Qual � o seu nome? ");
        fgets(nome, (sizeof(char))*64, stdin);
        //scanf("%s", nome);
        inserir_recorde(nome, pontuacao);
    }
    else
    {
        printf("Voc� n�o quebrou um recorde :(\n");
    }
}
