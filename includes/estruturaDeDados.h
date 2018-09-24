#ifndef ESTRUTURAS_DE_DADOS_H
#define ESTRUTURAS_DE_DADOS_H

#define TAM_PALAVRA 40
#define TAM_BUCKETS 0


typedef struct NO {
	//valores
	int valorHash;
	char [TAM_PALAVRA];

	//next
	struct NO* next;

}tLista;



//typedef NO lista;

int CriaLista();

int InseririElementos();

int PercorrerLista();


#endif