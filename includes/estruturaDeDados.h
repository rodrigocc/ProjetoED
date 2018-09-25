#ifndef ESTRUTURAS_DE_DADOS_H
#define ESTRUTURAS_DE_DADOS_H

#include <stdlib.h>
#include <string.h>

#define TAM_PALAVRA 40
//#define TAM_BUCKETS 0


typedef struct NO {
	//valores
	int valorHash;
	char palavra[TAM_PALAVRA];

	//next
	struct NO* next;

}tLista;



//typedef NO lista;

int PercorrerLista(tLista *inicio, const char *palavra);

int InseririElementos(tLista *inicio, tLista *elemeto);

int CriariaLista();

#endif