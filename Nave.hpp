#include <iostream>
#include "Ponto2D.hpp"

struct Nave
{
    
    double _energia;
    double _forca;
    Ponto2D _posicao;

    Nave(Ponto2D coord_inciais);
    Nave(Ponto2D coord_iniciais, double forca_inicial=1, double energia=100);
    void mover(double dx, double dy);
    double calcular_distancia(Nave* nave);
    Nave* determinar_nave_mais_proxima(Nave** naves, int n);
    void atacar(Nave** naves, int n);
    void imprimir_status();
    


};