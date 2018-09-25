#include "estruturaDeDados.h"


int InseririElementos(tLista *inicio, tLista *elemeto){

	tLista *ptrAux = inicio;
	tLista *novo;

	//printf("%p\n", inicio);
	novo = (tLista*) malloc(sizeof(tLista));
	*novo = *elemeto;

	if(inicio != NULL){
		inicio->next = novo;
		novo->

		return 1;
	}else if(inicio == NULL){

		inicio = novo;
		inicio->next = NULL;
		return 1;
	}

}


int PercorrerLista(tLista *inicio, const char *palavra){
	tLista *ptrAux = inicio;
	
	while(1){

		if(ptrAux == NULL){
			return 0;
		
		}else if(!strcmp(ptrAux->palavra, palavra)){			
			
			return 1; 
 		}

		ptrAux = ptrAux->next;
	}
}
