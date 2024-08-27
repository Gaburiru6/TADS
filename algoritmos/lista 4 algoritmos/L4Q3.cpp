#include<iostream>
using namespace std;
int main(){
    int tamanho = 15;
    int vetor[tamanho];
    int i;
    char escolha;

    cout << "digite os valores do vetor:\n";
    for(i=0;i<tamanho;i++){
        cin >> vetor[i];
    }

    cout << "digite 'P' para par ou 'I' para impar: ";
    cin >> escolha;

    switch(escolha){
        case 'p':
        case 'P':
        for(i=0;i<tamanho;i++){
            if(vetor[i]%2==0){
                cout << vetor[i] << endl;
            }
        }
        break;
        case 'I':
        case 'i':
        for(i=0;i<tamanho;i++){
            if(vetor[i]%2!=0){
                cout << vetor[i] << endl;
            }
        }
        break;
    }

    system("pause");
}