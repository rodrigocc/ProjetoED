#ifndef HASH_FUNCAO_H
#define HASH_FUNCAO_H 

#include "estruturaDeDados.h"
#include <string.h>
#include <math.h>

//
// Created by rodrigo on 23/09/18.

void OrganizaDicionario(tLista *buckt, int valorHash,  char *palavra);

int VerificaPalavra(tLista * cabeca, char *palavra);// suposição

int hash(const char * str, int tamanhoBucktes);

#endif