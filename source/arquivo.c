#include "arquivo.h"
/*                                                              *\



\*                                                              */

int LerPalavra(FILE *stream, char *palavra, int tamanho){
	

	if(!stream){
		printf("Error! Não foi possivel abrir o arquivo.");
		return 0;
	
	}else{
		if(feof(stream)){
			fclose(stream);
			return 1;
		}
		fscanf(stream, "%s", palavra);
		//palavra[strlen(palavra)-1]= '\0';
	}

	return 0;
}


/*
int GerarResultado(FILE *stream, tResultado *resultado, char *diretorio){
	int i;
	stream = fopen(diretorio, "w+");
	if(!stream){
		printf("Error ao tentar salvar o log!");
	}
	fprintf(stream,"=========================================\n");
	fprintf(stream,"Numero total de palavras do texto: %d\n", );
	fprintf(stream,"Tempo total de verificacao: %d\n", );
	fprintf(stream,"Numero de palavras que falharam: %.2f\n", );
	fprintf(stream,"Lista de Palavras que falharam no spell check: %d\n\n",);
	fprintf(stream,"Num. Ocorrencia - Palavra: linha, coluna\n");
	fprintf(stream,"------------------------------------------\n");
	for(i=0; i</ ; i++){
		fprintf(stream, "%d - %s: %d, %d \n", );

	}
	fprintf(stream, "=========================================\n\n");
	
	fclose(stream);
}
*/
