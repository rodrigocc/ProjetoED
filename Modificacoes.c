#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct palavra {	                             //Definição da estrutura do Item a ser Definido
    //chave
    char valorhash[256];
};
typedef struct hash Hash;

struct hash{
    char chaves[100];                              //Definição da Estrutura da  tabela Hash
    int qtd, TABLE_SIZE;
    struct palavra  **itens;
};
Hash* ha;                           //Definição de Ponteiro Para a tabela Hash

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Definição das Funções da tabela Hash:
// .1 Hash* CriaHash(int 100): //Criação da tabela e inicialização.
// .2 void liberahash(hash* ha); //Método da Liberação da tabela após finalização de execução.
// .3 int valorString(Char *str);
// .4 int InsereHash_SemColisão(Hash* ha, Struct palavra t1);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Implementação Das Funções da tabela Hash;

Hash* CriaHash(int TABLE_SIZE) {
    Hash *ha = (Hash *) malloc(sizeof(struct hash));
    if (ha != NULL) {
        int i;
        ha->TABLE_SIZE = TABLE_SIZE;
        ha->itens = (struct palavra **)malloc(TABLE_SIZE * sizeof(struct palavra *));
        if (ha->itens == NULL) {
            free(ha);
            return NULL;
        }
            ha->qtd = 0;
            for (i = 0; i < ha->TABLE_SIZE; i++) {
                ha->itens[i] = NULL;

            }
            return ha;


    }
}
void liberHash(Hash* ha){            //Libera tabela Hash
    if(ha != NULL){
        int i;
        for(i = 0 ; i < ha->TABLE_SIZE; i++){
            if(ha->itens[i]!= NULL){
                free(ha->itens[i]);
            }

        }
        free(ha->itens);
        free(ha);
    }
}

int Valorstring(char   *str){  //Função Valor String está funcionando me retornando Valor Inteiro Para Chave
    int i;
    int chave = 7;
    int tamanho = strlen(str);

    for(i = 0; i < tamanho; i++){
        chave = 31 * chave + (int) str[i] ;
        return chave;


    }
    return chave;

}

int ChaveDivisao(int chave, int TABLE_SIZE){ //(Função que Me retorna o MOD Entre a chave o Tamanho Da Tabela )Função não está funcionando
    return  (chave & 0x7FFFFFFF) % TABLE_SIZE;
}
int ChaveMultiplicacao(int chave , int TABLE_SIZE){ //Função de Hashing 2 , para testes , Está Funcionando
    float A = 0.6180339887; // CONSTANTE 0 < A < 1
    float val = chave * A;
    val = val - (int) val;
    return (int) (TABLE_SIZE * val);

}


int InsereHashSemColisao(Hash* ha , struct palavra p1){
    if((ha == NULL) || (ha->qtd == ha->TABLE_SIZE)){
        return 0;
    }
    int Chavenumero = Valorstring(p1.valorhash);

    int posicao = ChaveMultiplicacao(Chavenumero,ha->TABLE_SIZE);

    struct palavra* novo;

    novo = (struct palavra*)malloc(sizeof(struct palavra));

    if(novo == NULL){
        return 0;


    }
    *novo = p1;
    ha->itens[posicao] = novo;
    ha->qtd++;
    return 1;
}

int comparaHash(int chave , int TABLE_SIZE){
    int cont = 0;
    if(chave == )
}












int main() {
    Hash* ha = CriaHash(307856);

    int i,x,y,z;
    struct palavra p;



    char palavras[50];
    FILE *arquivoteste;
    arquivoteste = fopen("teste.txt","r");
    if(arquivoteste == NULL){ // como o arquivo teste é um ponteiro e ele não aponta para nenhum lugar na memória, tratamos o erro.
        printf("O Arquivo Não pode ser aberto");
        system("pause");
        return 0;
    }
    else{

        while(!feof(arquivoteste)){
            fgets(p.valorhash,256,arquivoteste);
            x = Valorstring(p.valorhash);
            y = ChaveMultiplicacao(x,ha->TABLE_SIZE);
            z = InsereHashSemColisao(ha,p);




            for(i=0;i<strlen(p.valorhash);i++){

                p.valorhash[i] = 0; //usado para zerar todas as letras da palavra

            }




        }


        fclose(arquivoteste);


        return 0;

    }


}























