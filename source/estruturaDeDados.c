#include "estruturaDeDados"






int CriariaLista(){
	
}



int InseririElementos(tlista *inicio, tlista *elemeto){
	tlista *ptrAux = inicio;

	if(inicio){
		inicio = elemeto;
		elemeto->next = ptrAux;

	}else{
		return 0;
	}

}


tlista* PercorrerLista(tlista *inicio, tlista *ptrElemento){
	
	tlista *ptrAux=inicio;
	while(1){

		if(ptrAux->next == NULL){
			return NULL;
		}else if( ptrAux->next == ptrElemento){
			return ptrAux->next;
		}


		ptrAux = ptrAux->next;

	}

	return NULL;
}

