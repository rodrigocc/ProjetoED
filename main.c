#include <stdio.h>
#include <stdlib.h>

#define TAM_BUCKTS 10

#include "arquivo.h"
#include "funcaoHashing.h"
#include "estruturaDeDados.h"



int main(int argc, char* argv[]){

    char palavra[TAM_PALAVRA];
    FILE *streamArquivoDict, *textoTeste;
    int flag = 0, i, valorHash=0;
    
    tLista *buckt[TAM_BUCKTS];

    for (i = 0; i < TAM_BUCKTS; i++)
    {
        buckt[i]= NULL;
    }

// Primeira parte, Calculo de hash do dicionario
    printf("Carregando o dicionario!\n");
    streamArquivoDict = fopen(argv[1], "r");

    while(1){
        flag = LerPalavra(streamArquivoDict, palavra, TAM_PALAVRA);
        valorHash = hash(palavra); // suposição de função

        OrganizaDicionario(buckt[valorHash], valorHash, palavra); // suposição

        if(flag){
    		break;
    	}    
    }

// Segunda parte, spell checker
    printf("Carregando texto teste!\n");
    textoTeste = fopen(argv[1], "r");

    while (1)
    {
        flag = LerPalavra(textoTeste, palavra, TAM_PALAVRA);
        valorHash = hash(palavra); // suposição de função

        VerificaPalavra(buckt, valorHash);// suposição


        if (flag)
        {
            break;
        }
    }

    //GerarResultado();

    return 0;
}
