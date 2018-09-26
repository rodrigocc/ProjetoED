#include "funcaoHashing.h"


struct texto{	                             //Definição da estrutura do Item a ser Definido
    //aqui ficaria a entrada do dicionário de palavras..
	__FILE__  *dicionario;
	dicionario = fopen("/home/rodrigo/Projetos/ProjetoED-master/dicionario/ascii_noaccent_noduplicates_FIXED_v2.txt","r");
    char arquivo[30];

};
typedef struct hash Hash;

struct hash{
    char chaves[TABLE_SIZE];                              //Definição da Estrutura da  tabela Hash
    int qtd,TABLE_SIZE;
    struct texto **itens;
};
Hash* ha;                           //Definição de Ponteiro Para a tabela Hash

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Definição das Funções da tabela Hash:
// .1 Hash* CriaHash(int TABLE_SIZE): //Criação da tabela e inicialização.
// .2 void liberahash(hash* ha); //Método da Liberação da tabela após finalização de execução.
// .3 int valorString(Char *str);
// .4 int InsereHash_SemColisão(Hash* ha, Struct Texto t1);
// .4 int buscaHash_SemColisão(Hash* ha, int mat, structaluno* t1);
// .5 int InsereHash_EnderAberto(HashAberto(Hash* ha , struct texto t1);
// .6 int buscaHash_EnderAberto(Hash* ha , int mat , struct aluno* t1);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Implementação Das Funções da tabela Hash;

Hash* CriaHash(int TABLE_SIZE) {
    Hash *ha = (Hash *) malloc(sizeof(struct hash));
    if (ha != NULL) {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct texto **)
        malloc(TABLE_SIZE * sizeof(struct texto *));
        if (ha->itens == NULL) {
            free(ha);
            return NULL;
        } else {
            ha->qtd = 0;
            for (i = 0; i < ha->TABLE_SIZE; i++) {
                ha->itens[i] = NULL;

            }
            return ha;

        }
    }


int hash(char * str, ha.TABLE_SIZE){
	int i, posicaoHash;
	int chave = 7;
	int tamanho = strlen(str);

	for(i = 0; i < tamanho; i++){
		chave = 31 * chave +(int);
		posicaoHash = (chave % ha.TABLE_SIZE);
		return posicaoHash;
		
	}





}
	

int trataColisaoAberta(int posicaochave , int i , ha.TABLE_SIZE){
	int posicaovaga;
	for(i = 0; i < ha.TABLE_SIZE; i++){
		if(ha.TABLE_SIZE[i] != NULL){
			posicaovaga = (posicaochave+i) % ha.TABLE_SIZE;
		}

	}
	
	return posicaovaga;

	
}

int InsereHashEndAberto(Hash* ha , struct texto t1){
	if(ha == NULL) || ha.qtd == ha.TABLE_SIZE){
		return 0;
	}
	int i , posicaochaveini , posicaovaga;
	posicaochaveini = hash(char * str, ha.TABLE_SIZE);
	for(i = 0; i < ha.TABLE_SIZE; i++){
		posicaovaga = (posicaochaveini +i) % ha.TABLE_SIZE;
		if(ha.// campo que aponta para o arquivo[posicaovaga] == NULL){
			struct texto* novo;
			novo = (struct texto*)malloc(sizeof(struct texto));
			if(novo == NULL){
				return printf("Falha na alocação");

			}
			else{
				*novo = t1;
				ha.itens[posicaovaga] = novo;
				ha.qtd ++;
				return 1;

			}


			
		}
		return 0;


	}
	

}

int buscaHash_EnderAberto(Hash* ha , ha.chaves , struct texto* t1 ){
	if(ha == NULL){
		return printf("Alocação Mal sucedida")
	}
	else{
		int i , posicao ,novaposicao
		posicao = hash(ha.chaves,ha.TABLE_SIZE);
		for(i = 0; i< ha.TABLE_SIZE; i ++){
			novaposicao = trataColisaoAberta(posicao,i , ha.TABLE_SIZE); // me retorna a posição vaga
			if(ha.itens[novaposicao] == NULL){
				return printf("Nenhum item a ser comparado")
			}
			if(ha.itens[novaposicao].chaves == ha.chaves){
				*t1 = *(ha.itens[novaposicao]);
				return 1 //retorna os dados 

			}

			}
			return 0;
		}
	}



}



