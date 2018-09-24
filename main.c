#include <stdio.h>
#include <stdlib.h>

#include "arquivo.h"
#include "funcaoHashing.h"
#include "estruturaDeDados.h"



int main(int argc, char* argv[]){

    char palavra[TAM_PALAVRA];
    FILE *streamArquivo;
    int flag = 0;


    printf("Carregando o dicionario!\n");
    streamArquivo = fopen(argv[1], "r");

    while(1){
        flag = LerPalavra(streamArquivo, palavra, TAM_PALAVRA);
        
    	if(!flag){
    		break;
    	}    
    }



    return 0;
}
