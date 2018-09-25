#include "estruturaDeDados.h"


int InseririElementos(tLista *inicio, tLista *elemeto){
	int i=0;

	tLista *ptrAux = inicio;
	tLista *novo;

	novo = (tLista*) malloc(sizeof(tLista));
	*novo = *elemeto;

	if(inicio != NULL){
		novo->next = inicio->next;
		inicio->next = novo;

		printf("%d\n", i++);
		return 1;

	}else{

		inicio = novo;
		inicio->next = NULL;
		return 1;
	}

}


int PercorrerLista(tLista *inicio, const char *palavra){
	tLista *ptrAux = inicio;
	int i;

	while(1){

		if(ptrAux == NULL){
			return 0;
		
		}else if(!strcmp(ptrAux->palavra, palavra)){			
			
			return 1; 
 		}

 		printf("%d\n",i++);
		ptrAux = ptrAux->next;
	}


}
