/*Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo 
de 10; se for ímpar, escreva se é divisível por 5.*/
#include<iostream>
using namespace std;
int main(){
	
	int num;
	
	cout << "digite um numero inteiro ";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "par";
		if(num % 10 == 0){
		cout << "\nmultiplo de 10\nn";
		}else{
			cout << "\nnao multiplo de 10\n";
		}
	}else{
		if(num % 2 == 1){
			cout << "impar";
			if(num % 5 == 0){
				cout << "\ndivisivel por 5\n";
			}else{
				cout << "\nnao divisivel por 5\n";
			}
		}
	}
	
	
	system("pause");
}
