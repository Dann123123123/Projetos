#include <iostream>
#include "Nave.hpp"
#include <cmath>
#include <string.h>


using namespace std;



    Nave::Nave(Ponto2D coord_inicial, double forca_inicial, double energia)
    {
        _forca = forca_inicial;
        _energia = energia;
        _posicao = coord_inicial;
        
    }
    Nave::Nave(Ponto2D coord_inicial)
    {
        _posicao = coord_inicial;
    }
   
    void Nave::mover(double dx,double dy)
    {
        _posicao._X += dx;
        _posicao._Y += dy;
    };
    double Nave::calcular_distancia(Nave* nave)
    {
        double distancia = _posicao.calcular_distancia(&nave->_posicao);
        return distancia;
    };
    void Nave::atacar(Nave** naves, int n)
    {
        ///ataca a nave mais proxima
        int index_nave_mais_proxima = -1;
        double dano, distancia = calcular_distancia(naves[0]);
        for(int index = 1; index < n;index++)
        {
            
            if(distancia > calcular_distancia(naves[index]))
            {
                distancia = calcular_distancia(naves[index]);
                index_nave_mais_proxima = index;
            }
        }
        dano = (100/distancia)*_forca;
        if(dano > 30)
        {
            dano = 30;
        }
        naves[index_nave_mais_proxima]->_energia -= dano;
        if(naves[index_nave_mais_proxima]->_energia <= 50)
        {
            std::cout << "Energia baixa!!!";
        }
    };
    void Nave::imprimir_status()
    {
        // Nave.X||NaveY||Nave.energia
        string part1 = "\n"+to_string(_posicao._X)+" || ";
        string part2 = to_string(_posicao._Y) +" || ";
        string part3 = to_string(_energia)+"\n";
        string result = part1+ part2 + part3;
        
        cout<< result;
    };





