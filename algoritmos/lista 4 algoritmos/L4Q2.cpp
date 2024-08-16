#include<iostream>
using namespace std;

int main(){
    int tamanho = 20;
    int vetor[tamanho];
    int i, pares = 0;

    cout << "digite os valores do vetor: \n";
    for(i=0; i<tamanho; i++){
        cin >> vetor[i];
    }

    for(i=0;i<tamanho;i++){
        if(vetor[i]%2==0){
            pares++;
            vetor[i]=0;
        }
    }

    cout << "numero de elementos pares: " << pares << endl;
    cout << "vetor:\n";
    for(i=0; i<tamanho; i++){
        cout << vetor[i] << endl;
    }


    system("pause");
}