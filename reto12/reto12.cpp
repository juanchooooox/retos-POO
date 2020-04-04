//caso general:
//array A que consiste de N enteros
// 0<= P < Q < N
// la función contiene al menos dos elementos
//pseudocodigo:
//1. inicializar vector A
//2. promedio minimo = 10000
//2. for(int p=0;p<n-1;p++)
//suma=0
//2.1 for (int q=p+1;Q=N+1;i++)
//2.2 suma=suma+A[i]

//promedio=suma/(q-p+1)
//if(promedio<prom_min)
//porm_min=pomedio
//  pos=p
//

#include<iostream>
#include<vector>

using namespace std;

int pos;

int solution(vector<int>A){
    float prom_min=10000;
    int N=A.size();
    for (int P=0;P<N-1;P++){
        for(int Q=P+1;Q<N;Q++){
            float suma=0;
            for(int i=P;i<=Q;i++){
                suma=suma+A[i];
            }
             float promedio=suma/(Q-P+1);
                if(promedio<prom_min){
                prom_min=promedio;
                pos=P;
            }
        }
    }
    return pos;
}

int main(){
    int res;
    //paso1
    vector<int>A{4,2,2,5,1,5,8};
    res = solution(A);
    cout << res << endl;
}