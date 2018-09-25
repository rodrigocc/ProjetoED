#include "funcaoHashing.h"


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


int hash(char * str, int tamanhoBucktes){
	int i, posicaoHash;
	int chave = 7
	int tamanho = strlen(str);

	for(i = 0; i < tamanho; i++){
		chave = 31 * chave +(int);
		posicaoHash = (chave % tamanhoBuckets);
	}
	return posicaoHash;

	


}

int MultiplicaPosicaoHash(//Seria o Hash Gerado Pela FunçãoHash// int tamanhoBuckets){
	float A = 0.718033
	float val = //hASH * A;
	val = val - (int)val;
	return(int) (tamanhoBuckets * val);

}

