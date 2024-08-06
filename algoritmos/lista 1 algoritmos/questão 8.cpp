#include<iostream>
using namespace std;
/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o 
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter*/
int main(){
	
	float real, dolar, cotacao;
	cout << "insira o valor da cotacao atual do dolar: ";
		cin >> cotacao;
	cout << "insira a quantidade de dolares: ";
		cin >> dolar;
		
	real = dolar*cotacao;
		
	cout << "\ncom a cotacao atual fica R$" << real << "\n";
	
	
system("pause");
}
