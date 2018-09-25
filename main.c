#include <stdio.h>
#include <stdlib.h>

#define TAM_BUCKTS  100000

#include "arquivo.h"
#include "funcaoHashing.h"
#include "estruturaDeDados.h"



int main(int argc, char* argv[]){

    char palavra[TAM_PALAVRA];
    
    int flag = 0;
    int i;
    int valorHash=0;
    int listaE=0;
    
    FILE *streamArquivoDict, *textoTeste;
    tLista *buckt[TAM_BUCKTS];

    for (i = 0; i < TAM_BUCKTS; i++)
    {
        buckt[i]= NULL;
    }

// Primeira parte, Calculo de hash do dicionario
    
    printf("Carregando o dicionario!\n");
    streamArquivoDict = fopen("dicionario/ascii_noaccent_noduplicates_FIXED_v2.txt", "r");

    while(1){

        if(LerPalavra(streamArquivoDict, palavra, TAM_PALAVRA)){
            break;

        }

        valorHash = hash(palavra, TAM_BUCKTS); 
        OrganizaDicionario(buckt[valorHash], valorHash, palavra); 
        
        printf("%p\n", buckt[valorHash]); //teste
    }



// Segunda parte, spell checker
    /**
    printf("Carregando texto teste!\n");
    textoTeste = fopen("dicionario/ascii_noaccent_noduplicates_FIXED_v2.txt", "r");

    while (1)
    {
        flag = LerPalavra(textoTeste, palavra, TAM_PALAVRA);
        valorHash = hash(palavra, TAM_BUCKTS); // suposição de função

        VerificaPalavra(buckt[valorHash], palavra);// suposição

        if (flag)
        {
            break;
        }
    }


    //GerarResultado();

*/

    return 0;
}// fim da main
