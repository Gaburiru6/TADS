#include<iostream>
using namespace std;
/*Leia dois valores inteiros para as variáveis A e B e efetue as operações de adição, subtração, 
multiplicação e divisão de A por B, apresentando ao final os resultados obtidos. Em seguida leia 
dois valores lógicos C e D e efetue as operações de negação (de cada um dos valores), conjunção 
(E) e disjunção (OU), apresentando ao final os resultados obtidos.*/
int main(){
	int a, b;
	
	cout << "insira dois valores inteiros\n";
		cin >> a >> b;
		
	cout << "\n" << a << " + " << b << " = " << a+b;
	cout << "\n" << a << " - " << b << " = " << a-b;
	cout << "\n" << a << " * " << b << " = " << a*b;
	cout << "\n" << a << " / " << b << " = " << a/b << "\n";
	
	cout << "\n===============================================\n";
	
	bool c, d;

    cout << "\n\nDigite (0 ou 1) para C e para D respectivamente:\n";
   		cin >> c >> d;

    cout << "\nNegação de C e D respectivamente: " << !c << " "<< !d;
    cout << "\n\nConjucao de C e D: " << (c && d);
    cout << "\n\nDisjucao de C e D: " << (c || d);

	
	
cout << "\n=================================\n";
system("pause");
}0
