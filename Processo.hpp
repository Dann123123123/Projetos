#ifndef PROCESSO_H
#define PROCESSO_H

#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

struct Processo
{
    int _id;
    int _prioridade;
    string _nome;
    
    
    Processo* next = nullptr;  
    Processo* previous = nullptr;

    Processo(int id, string nome, int prioridade);
    void imprimir_dados();
    void processo_atualiza_anterior(Processo* anterior);
    void processo_atualiza_posterior(Processo* posterior);
};

#endif