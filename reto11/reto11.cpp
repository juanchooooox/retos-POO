//pseudocódigo:
//Pasos:
//1. inicializar las variables a, b y k
//2. crear una variable contador
//3. crear un vector con los numeors de A a B.(queda en visto)
//4. for (inicia en A, i<=B, i++)
//4.1 si(i mod k =0)
//4.1.1 contador aumenta
//5. retornar valor de contador




#include<iostream>
#include<vector>
using namespace std;

int solution(int A, int B, int K){
    //paso2
    int cont=0;
    //paso 4
    for(int i=A;i<=B;i++){
        //paso 4.1
        if(i%K == 0){
            //paso 4.1.1
            cont = cont+1;
        }
    }
    //paso5
    return cont;
}

int main(){
    //paso 1
    int A;
    int B;
    int K;
    cout<< "capturar el valor de A, parcero: "<<endl;
    cin >> A;
    cout<< "capturar el valor de B, parcero: "<<endl;
    cin >> B;
    cout<< "capturar el valor de K, parcero: "<<endl;
    cin >> K;
    //llamar a la función solución

    //imprimir resultado
    int result;
    result=solution(A,B,K);
    cout<<result<<endl;
}
