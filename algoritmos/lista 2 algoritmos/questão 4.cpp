/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros 
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide 
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o 
imposto a ser pago. */
#include<iostream>
using namespace std;
int main(){
	int ano;
	float imposto, preco;
	
	cout << "insira o ano do automovel: ";
	cin >> ano;
	cout << "insira o valor: ";
	cin >> preco;
	
	if(ano >= 1990){
		imposto = preco * 0.015;
	}else{
		if(ano<1990){
			imposto = preco * 0.01;
		}
	}
	
	cout << "\no valor do imposto sera R$" << imposto << "\n";
	
	system("pause");
}
