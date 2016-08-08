/*
EXEMPLO DE MATRIZ 2
MATRIZ 30X2
CRIAR UMA MATRIZ QUE ARMAZENE NOTAS DO 1o e 2o BIMESTRE DE 30 ALUNOS
DA TURMA A COM VALORES ENTRE 0.0 E 10.0 LIDOS DO USUARIO. APOS EXIBA
AS MEDIAS INDIVIDUAIS, BIMESTRAIS E GERAL DA TURMA
*/
#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 30
#define NOTAS 2
int main()
{
    float pauta[ALUNOS][NOTAS], MI/*MEDIA INDIVIDUAL*/, M1 /*MEDIA 1o bi*/, S1 = 0 /*SOMA 1o*/, M2, S2 = 0, MG/*MEDIA GERAL*/;
    int i,j;
    printf("Entre com as notas da turma A:\n");
    //preencher primeiro a coluna (notas do bimestre) entao vamos usar o j por fora e o i por dentro
    for(j=0; j< NOTAS; j++)
    {
        printf("Notas do Bimestre %i:\n", j+1);
        i= 0;
        while(i<ALUNOS)
        {
            //pegar nota
            printf("Aluno %i: \n", i+1);
            printf("Nota[0, 10]: ");
            scanf("%f", &pauta[i][j]);
            //checar se esta entre 0 e 10
            if (pauta[i][j] >= 0 && pauta[i][j] <=10)
            {
                //guardar somas
                if (j==0) //1o bimestre
                    S1+=pauta[i][0];
                else
                    S2+=pauta[i][1];
                i++;
            }
            else
            {
                printf("\n---------------\nNota incorreta\n---------------\n\n");
            }
        }
    }
    printf("Medias Individuais:\n");
    for (i=0; i< ALUNOS; i++)
    {
        MI = (pauta[i][0] + pauta[i][1]) /2;
        printf("Media do Aluno %i: %.1f\n", i+1, MI);
    }
    M1 = S1 / ALUNOS;
    M2 = S2 / ALUNOS;
    MG = (M1 + M2) /2;
    printf("Media do Bimestre 1: %.1f\n", M1);
    printf("Media do Bimestre 2: %.1f\n", M2);
    printf("Media Geral da Turma: %.1f\n", MG);
    return 0;
}
