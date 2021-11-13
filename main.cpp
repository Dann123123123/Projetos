#include <iostream>
#include "Processo.cpp"
#include "ListaProcessos.cpp"
//#include "avaliacao_basica_escalonador.hpp"
using namespace std;

int main()
{
    Processo* processo;
    string comando;
    int codigo_comando;
    Processo* inicio =  new Processo(0,"inicio",0);
    Processo* fim =  new  Processo(-1,"fim",-1);

    cout << "Digite o nome do Processo" << endl;
    cin >> comando;
    
    if(comando == "a"){
        codigo_comando = 1;
    }
   
    ListaProcessos lista = ListaProcessos(inicio, fim);
    
    
    switch (codigo_comando){
    case 1:
     processo = new Processo(1, "proc", 1);
     lista.adicionar_processos(processo);
     break;
    
   /* case 'm':
     processo = new Processo; 
     ListaProcessos::remover_processo_maior_prioridade();
     break;

    case 'n':
     processo = new Processo;
     ListaProcessos::remover_processo_menor_prioridade();
     break;
    
    case 'p':
     processo = new Processo;
     ListaProcessos::imprimir_lista();
     
     case 'r':
     processo = new Processo;

    */ 
    }
     

}