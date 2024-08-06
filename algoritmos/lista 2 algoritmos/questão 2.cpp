/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é 
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/
#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout << "insira um numero inteiro\n";
		cin >> num;
	
	if(num % 2 == 0){
		cout << "par\n";
			if(num > 100){
				cout << "maior que 100\n";
			}else{
		 		if(num <= 100){
					cout << "menor ou igual a 100\n";
				}
			}
	
	}else{
		if(num % 2 == 1 || num % 2 == -1){
			cout << "impar\n";
				if(num > 0){
					cout << "positivo\n";
				}else{
					if(num < 0)
						cout << "negativo\n";
				}
					
				}
				
	}
	
system("pause");
}
