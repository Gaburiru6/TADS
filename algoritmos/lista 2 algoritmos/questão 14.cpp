/*Leia 3 n�meros inteiros e escreva uma das seguintes mensagens: 
� Todos os n�meros s�o iguais; 
� Todos os n�meros s�o diferentes; 
� Apenas dois n�meros s�o iguais. */
#include<iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	
	cout << "digite 3 numeros inteiros:\n";
	cin >> n1 >> n2 >> n3;
	
	if(n1 == n2 && n2 == n3){
		cout << "todos os numeros sao iguais\n";
	}else{
		if(n1 != n2 && n2 != n3){
			cout << "todos os numeros sao diferentes\n";
		}else{
			if((n1 == n2 && n2 != n3) || (n1 == n3 && n3 != n2) || (n3 == n2 && n2 != n1)){
				cout << "apenas dois numeros sao iguais\n";
			}
		}
	}
	
	
	system("pause");
}
