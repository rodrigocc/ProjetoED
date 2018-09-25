#include "estruturaDeDados.h"


int InseririElementos(tLista *inicio, tLista *elemeto){
	tLista *ptrAux = inicio;

	tLista *novo = (tLista*) malloc(sizeof(tLista));
	*novo = *elemeto;

	if(inicio != NULL){
		inicio = novo;
		inicio->next = ptrAux;
		
		return 1;
	}else{
		
		inicio = novo;
		inicio->next = NULL;
		
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
