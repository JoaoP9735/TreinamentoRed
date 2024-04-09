#include "iostream"
#include "circulo.h"

using namespace std;

int main(){
    circulo c1(1,1,1);
    circulo c2(1,2,2);
    cout << c1.getDist(c2) << endl;
    c2.setCentro(3,3);
    c1.setRaio(2);
    cout << c1.getDist(c2) << endl;
    c1.printRaio();
    c2.printCentro();
    c2.printArea();
    cout << c1.getCircunferencia() << endl;
    return 0;
}