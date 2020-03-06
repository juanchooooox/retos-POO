#include <iostream>
using namespace std;
int minsaltos(int X, int Y, int D){
    int diff=(Y-X)/D +1;

}

int main (){
    int X,Y,D;
    int resultados;
    cout<<"parcero deme un punto de incio: ";
    cin >> X;
    cout<<"parcero deme un punto final: ";
    cin>>Y;
    cout<<"bato dame una distancia de saltos: ";
    cin>>D;
    resultados=minsaltos(X,Y,D);
    cout<<"parcero cual es el numero minimo de saltos: "<<resultados;
}