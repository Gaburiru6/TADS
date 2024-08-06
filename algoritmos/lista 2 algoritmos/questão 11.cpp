/*Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique 
e escreva a soma de todos os seus algarismos. Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 + 
1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero 
inv�lido�.*/
#include<iostream>
using namespace std;
int main(){
	// codigo roubado
	int numero, soma = 0;

    cout << "Digite um n�mero inteiro maior do que zero: ";
    cin >> numero;

    if (numero <= 0 || numero > 99999) {
        cout << "N�mero inv�lido." << endl;
        return 0;
    }
    
    // seguindo o exemplo com 281 o resultado 11

    int digito = numero / 10000; 
    soma += digito; // aqui ele soma zero
    numero %= 10000; 

    digito = numero / 1000;
    soma += digito; // aqui ele soma zero
    numero %= 1000;

    digito = numero / 100;
    soma += digito; // aqui ele soma 2
    numero %= 100;

    digito = numero / 10;
    soma += digito; // aqui ele soma 8
    numero %= 10;

    soma += numero; // aqui ele soma 1

    cout << "A soma dos algarismos � " << soma << "." << endl;

    return 0;
	
	
	
	
	
	
	
	system("pause");
}
