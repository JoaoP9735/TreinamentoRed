#include "iostream"
#include "string"
using namespace std;

string EhPrimo(int a){
    if(a%2==0){
        if(a==2)
            return "É primo";
        else
            return "Não é primo";
    }
    else if(a==1)
        return "Não é primo";
    else{
        for(int i=1; i<=a; i+=2){
            if((a%i==0) && (i!=1) && (i!=a))
                return "Não é primo";
            else
                return "É primo";
        }
    }
}

int main(){
    int a;
    cin >> a;
    cout << EhPrimo(a) << endl;
    return 0;
}