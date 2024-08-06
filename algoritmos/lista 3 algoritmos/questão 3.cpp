/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por 
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja 
maior que Chico.*/
#include<iostream>
using namespace std;
int main(){
	
	float chico = 1.5, juca = 1.1;
	int anos = 0;
	
	while(juca<=chico){
		cout << "\nano " << anos << "\nchico " << chico << "\njuca " << juca << endl;
		chico = chico + 0.02;
		juca = juca + 0.03;
		anos++;
	}
	
	cout << "\ndemora " << anos-1 << "anos\n";
	system("pause");
}
