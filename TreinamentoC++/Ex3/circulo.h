#ifndef CIRCULO_H
#define CIRCULO_H

class circulo{
    public:

    circulo(float raio, float xCentro, float yCentro);
    void setRaio(float raio);
    void setCentro(float x, float y);
    float getArea();
    void printRaio();
    void printCentro();
    void printArea();
    float getRaio();
    float getXCentro();
    float getYCentro();
    float getDist(circulo c2);
    float getCircunferencia();
    private:
    float raio;
    float xCentro;
    float yCentro;
    float Area();
    float DistCentro(circulo c2);
    float Circunferencia();
};

#endif