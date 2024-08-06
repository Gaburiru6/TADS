#include<iostream>
using namespace std;
/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do 
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem 
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de 
fábrica de um carro e escreva o custo ao consumidor*/
int main(){
	
	float fabrica, distribuidor, imposto, final;
	
	cout << "insira o custo de fabrica do carro ";
		cin >> fabrica;
	
	distribuidor = fabrica*0.28;
	imposto = fabrica*0.45;
	final = fabrica+distribuidor+imposto;
	
		cout << "\no preco final para o consumidor sera: " << final << "\n";
	
	
	
system ("pause");
}
