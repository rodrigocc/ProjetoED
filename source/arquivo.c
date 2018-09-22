#include "arquivo.h"
/*                                                              *\



\*                                                              */

int LerPalavra(FILE *stream, char *palavra, int tamanho){
	
	if(!stream){
		printf("Error! Não foi possivel abrir o arquivo.");
		return -1;
	}else{
		if(feof(stream)){
			fclose(stream);
			return 1;
		}
		fgets(palavra, tamanho, stream);
		palavra[strlen(palavra)-1]= '\0';
	}
}

