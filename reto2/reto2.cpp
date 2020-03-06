#include<iostream>
#include<vector>
using namespace std;
vector<int> rotacion (vector <int> Aori, int k){
    vector<int>Acop;
    for(int j=0;j<k;j++){
        Acop=Aori;
        for(int i=0;i<Aori.size();i++){
            if (i==0){
                Aori[i]=Acop[Aori.size()-1];
            }else{
                Aori[i]=Acop[i-1];
            }
        }
    }
    return Aori;
}
int main(){
    int k;
    int numel;
    int vari;
    cout<<"brother inserte cantidad de datos: ";
    cin>>numel;
    vector<int> A;
    for(int i=0;i<numel;i++){
        cout<<"hermano inserte el numero"<<i+1<< ": ";
        cin>>vari;
        A.push_back(vari);
    }
    cout<<"parcero coloque numero de rotaciones: ";
    cin>>k;
    vector<int> copia;
    copia=rotacion(A,k);
    for(int i=0;i<A.size();i++){
     cout<<copia[i]<<endl;
    }
}