#include "iostream"
#include "string"
using namespace std;

string EhTriangulo(int a, int b, int c){
    if((a+b<c) || (a+c<b) || (b+c<a)){
        return "Não é triângulo";
    }
    else{
        if((a==b) && (a==c)){
            return "É um triângulo equilátero";
        }
        else if((a!=b) && (a!=c) && (b!=c)){
            return "É um triângulo escaleno";
        }
        else{
            return "É um triângulo isósceles";
        }
    }
}

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << EhTriangulo(a,b,c) << endl;
    return 0;
}