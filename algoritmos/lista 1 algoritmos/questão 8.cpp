#include<iostream>
using namespace std;
/*Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o 
valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter*/
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
