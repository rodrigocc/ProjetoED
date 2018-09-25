#include "funcaoHashing.h"


void OrganizaDicionario(tLista *buckt, int valorHash,  char *palavra){

	tLista elemento;

	elemento.valorHash = valorHash;
	strcpy(elemento.palavra, palavra);

	InseririElementos(buckt, &elemento);

}

int VerificaPalavra(tLista * cabeca, char *palavra){

	return PercorrerLista(cabeca, palavra);
}




int hash(const char * str, int tamanhoBucktes){
	
	int i, posicaoHash=0;
	int chave = 7;
	int tamanho = strlen(str);

	for(i = 0; str[i] != '\0'; i++){
		
		chave = 31 * chave + (str[i]);		
	}
		
	return abs(posicaoHash = (chave % tamanhoBucktes));

}

/*
int hash(const char *palavra, int tamanhoBuckets){
	
	float A = 0.718033
	float val = //hASH * A;
	val = val - (int)val;
	return (int) (tamanhoBuckets * val);

}

*/
//





// Created by rodrigo on 23/09/18.
//
/*
int ChaveString(char *str, int tamanhoDeBucktes){
	int i;
	int valor = 7;
	int tamanho = strlen(str);
	
	for(i =0 ; i < tamanho; i++){
    	valor = 31 * valor + (int);


	}

	return valor;
}
*/
