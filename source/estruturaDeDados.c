#include "estruturaDeDados.h"


int InseririElementos(tLista *inicio, tLista *elemeto){
	tLista *ptrAux = inicio;

	tLista *novo = (tLista*) malloc(sizeof(tLista));
	*novo = *elemeto;

	if(inicio != NULL){
		inicio = novo;
		inicio->next = ptrAux;
		puts("se não for null");

		return 1;
	}else{
		puts(" aqui NUll");
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
