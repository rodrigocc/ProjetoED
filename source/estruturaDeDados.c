#include "estruturaDeDados.h"


int InseririElementos(tLista *inicio, tLista *elemeto){
	tLista *ptrAux = inicio;

	tLista *novo = (tLista*) malloc(sizeof(tLista));
	*novo = *elemeto;

	if(inicio->next!= NULL){
		inicio->next = novo;
		novo->next = ptrAux;
		return 1;
	}else{
		inicio->next = novo;
		novo->next = NULL;
		return 1;
	}

}


tLista* PercorrerLista(tLista *inicio, tLista *ptrElemento){
	
	tLista *ptrAux = inicio;
	while(1){

		if(ptrAux == NULL){
			return NULL;
		}else if( ptrAux == ptrElemento){
			return ptrAux;
		}


		ptrAux = ptrAux->next;

	}

	return NULL;
}


int CriariaLista(){





}
