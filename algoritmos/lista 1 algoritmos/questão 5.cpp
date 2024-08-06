#include<iostream>
using namespace std;
/*Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso 
em horas, minutos e segundos*/
int main(){
	
	int seg, min, h;

	cout<< "insira uma quantidade de segundos\n";
		cin>> seg;

	min = seg/60;
	h = min/60;
	
	cout<< h%60 << ":" << min%60 << ":" << seg%60;

	
system("pause");
}
