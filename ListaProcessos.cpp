#include <iostream>
#include <cmath>
#include "ListaProcessos.hpp"
#include "Processo.cpp"
#include <string.h>

using namespace std;

ListaProcessos::ListaProcessos(Processo* head, Processo* tail)
{
    head->next= tail;
    tail->next= head;
    
}

void ListaProcessos::adicionar_processos(Processo* proc)
{
    
    for(Processo* p = head; p != tail; p = p->next)
    { 
        if(proc->_prioridade>p->_prioridade)
        {
            proc->next = p->next;
            p->next= proc;
            break;
        }
        if (proc->_prioridade = p->_prioridade)
        {
            proc->next = p->next;
        }
        
        
    }
    
}

Processo* ListaProcessos::remover_processo_maior_prioridade()
{
    Processo* maior = head;

    head = head->next; 
    head->previous = tail;


    return maior;
    
    

    
    
    
}

Processo* ListaProcessos::remover_processo_menor_prioridade()
{
    Processo* menor = tail;

    tail = tail->previous;
    tail->next = head;

    return menor;


}

Processo* ListaProcessos::remover_processo_por_id(int id)
{
    
     
     for(Processo* p = head; p != tail; p->next)
     {
        if(p->_id == id)
        {
             p->previous = p->next;
             return p;
           
        }
        if(p->next == tail)
        {
            
            if(p->next->_id = id)
            {
            
                tail = p;
                p->previous = p->next;
                
                return p;
            }
        }
    }  

      return NULL;  
}

void ListaProcessos::imprimir_lista()
{
    
    for(Processo* proc = head; proc != tail; proc = proc->next)
    {
        cout << proc << endl;
        proc->imprimir_dados();
    }
    
}