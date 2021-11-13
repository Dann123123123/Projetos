#include <iostream>
#include <cmath>
#include "Processo.hpp"

using namespace std;


Processo::Processo(int id ,string nome , int prioridade)
{
    _id = id;
    _prioridade = prioridade;
    _nome = nome;
}
 
void Processo::processo_atualiza_anterior(Processo* anterior)
{
   previous = anterior;
}

void Processo::processo_atualiza_posterior(Processo* posterior)
{
    next = posterior;
}




void Processo::imprimir_dados()
{
    int id1; 
    string nome1;
    int priori;
    id1 = this->_id;
    nome1 = this->_nome;
    priori = this->_prioridade;

    cout << id1 << nome1 << priori << endl;
    
}