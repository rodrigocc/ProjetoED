#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <string.h>
#include <stdio.h>

typedef struct {
    int numeroTotalPalaras;
    int tempoDeVerificacao;
    int palavrasFalhas;

}tResultado;




int LerPalavra(FILE *stream, char *palavra, int tamanho);

//int GerarResultado(FILE *stream, tResultado *resultado, char *diretorio);

#endif