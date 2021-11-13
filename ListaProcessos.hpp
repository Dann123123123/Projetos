#ifndef LISTAPROCESSOS_H
#define LISTAPROCESSOS_H

#include <iostream>

#include"Processo.hpp"

struct ListaProcessos
{
    ListaProcessos(Processo* head, Processo* tail);
    Processo* head = nullptr;
    Processo* tail = nullptr; 
   
    
    
    void adicionar_processos(Processo* proc);
    Processo* remover_processo_maior_prioridade();
    Processo* remover_processo_menor_prioridade();
    Processo* remover_processo_por_id(int id);
    void imprimir_lista();
};

#endif