#include<iostream>
using namespace std;
/*Leia dois valores inteiros nas vari�veis Val1 e Val2, troque os seus conte�dos e escreva o 
resultado. Exemplo: Se o valor lido foi 10 para a vari�vel Val1 e 11 para a vari�vel Val2, depois 
da troca o algoritmo ter� que escreva Val1 = 11 e Val2 = 10*/
int main(){
	
	int a, b , c;
	cout << "insira A e B\n";
		cin >> a >> b;
	
	c = a;
	a = b;
	b = c;
	
	cout << "A= " << a << "\nB= " << b << "\n";
	
system("pause");
}
