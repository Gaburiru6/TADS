/*Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se � 
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo.*/
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
