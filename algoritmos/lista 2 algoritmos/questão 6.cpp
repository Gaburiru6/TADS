/*A escola �APRENDER� faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que calcule 
e escreva o sal�rio de um professor, sabendo que o valor da hora/aula segue a tabela abaixo: 
Professor n�vel 1 R$ 12,00 por hora aula 
Professor n�vel 2 R$ 17,00 por hora aula 
Professor n�vel 3 R$ 25,00 por hora aula */
#include<iostream>
using namespace std;
int main(){
	int nivel, horas;
	
	cout << "professor qual o seu nivel?\n";
	cin >> nivel;
	cout << "quantas horas voce trabalhou?\n";
	cin >> horas;
	
	if(nivel == 1){
		cout << "vc devera receber R$ " << horas * 12 << "\n";
	}else{if(nivel == 2){
		cout << "vc devera receber R$ " << horas * 17 << "\n";
	}else{if(nivel == 3){
		cout << "vc devera receber R$ " << horas * 25 << "\n";
	}else{
		cout << "nivel nao existe\n";
	}
	}
	}
	
	
	
	system("pause");
}
