#include "iostream"
#include "circulo.h"
#include "cmath"
#define _USE_MATH_DEFINES
using namespace std;

    circulo::circulo(float raio, float xCentro, float yCentro) : raio(raio), xCentro(xCentro), yCentro(yCentro){

    }

    void circulo::setRaio(float raio){
        this->raio=raio;
    }
    void circulo::setCentro(float x, float y){
        this->xCentro = x;
        this->yCentro = y;
    }
    float circulo::getArea(){
        return this->Area();
    }
    void circulo::printRaio(){
        cout << "Raio: " <<this->getRaio() << endl;
    }
    void circulo::printCentro(){
        cout << "Centro: (" << this->getXCentro() << ", " << this->getYCentro() << ")" << endl;
    }
    void circulo::printArea(){
        cout << "Área: " << this->Area() << endl;
    }
    float circulo::getRaio(){
        return this->raio;
    }
    float circulo::getXCentro(){
        return this->xCentro;
    }
    float circulo::getYCentro(){
        return this->yCentro;
    }
    float circulo::getDist(circulo c2){
        return this->DistCentro(c2);
    }
    float circulo::getCircunferencia(){
        return this->Circunferencia();
    }

    float circulo::Area(){
        return M_PI*raio*raio;
    }
    float circulo::DistCentro(circulo c2){
        return sqrt(c2.getXCentro()*c2.getXCentro() + c2.getYCentro()*c2.getYCentro());
    }
    float circulo::Circunferencia(){
        return 2*M_PI*this->raio;
    }