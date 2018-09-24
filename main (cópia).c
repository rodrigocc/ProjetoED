#include <stdio.h>
#include <stdlib.h>
//PROJETO ED SPELL CHECKER

struct texto{                              //Definição da estrutura do Item a ser Definido
    //aqui ficaria a entrada do dicionário de palavras..
    char arquivo[30];

};
typedef struct hash Hash;

struct hash{                              //Definição da Estrutura da  tabela Hash
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


    int main() {
        printf("Hello, World!\n");
        return 0;
    }
}
