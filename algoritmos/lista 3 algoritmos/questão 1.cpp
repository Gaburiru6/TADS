/*Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da 
pessoa mais velha e a idade da pessoa mais nova.*/
#include<iostream>
using namespace std;
int main(){
	int idade, velha, nova, cont;
	cont = 1;
	
	while(cont<=100){
		cout << "escreva a idade da pessoa "<< cont << endl;
		cin >> idade;
		if(cont == 1){
			velha = idade;
			nova = idade;
		}
		if(idade>velha){
			velha = idade;
		}
		if(idade<nova){
			nova = idade;
		}
		cont++;
		system("cls");
	}
	if(cont=100){
		cout << "a pessoa mais velha tem "<< velha << " anos\ne a mais nova tem " << nova << " anos\n";
		}
	
	system("pause");
}
