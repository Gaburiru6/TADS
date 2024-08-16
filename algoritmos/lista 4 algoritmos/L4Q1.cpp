#include <iostream>
using namespace std;



int main(){
    int vetor[20];
    int i, code;

    for(i=0;i<20;i++){
        vetor[i] = i+1;
    }

    cout << "digite 1 para ordem direta ou 2 para ordem inversa: ";
    cin >> code;

    if(code == 1){
        cout << "Ordem direta: " << endl;
        for(i=0;i<20;i++){
            cout << vetor[i] << endl;
        }
    }
    
    if(code == 2){
        cout << "Ordem direta: " << endl;
        for(i=20;i>0;i--){
            cout << vetor[i] << endl;
        }  
    }

    system("pause");

}