#include "Ponto2D.hpp"
#include <iostream>
#include <cmath>


Ponto2D::Ponto2D(double x, double y)
{
    _X=x;
    _Y=y;
}
double Ponto2D::calcular_distancia(Ponto2D* ponto)
{ 
 
    return sqrt( pow( (_X-ponto->_X),2 ) + pow( _Y-ponto->_Y),2 ) );
};
