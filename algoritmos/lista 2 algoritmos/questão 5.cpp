/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, 
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e 
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de 
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a. 
C�DIGO CARGO PERCENTUAL 
101 Gerente 10% 
102 Engenheiro 20% 
103 T�cnico 30%  */
#include<iostream>
using namespace std;
int main (){
	int cargo;
	float salario;
	
	cout << "digite seu salario atual: ";
	cin >> salario;
	cout << "digite o codigo do seu cargo\n\
	gerente: 101\n\
	engenheiro: 102\n\
	tecnico: 103\n\
	outro: 100\n";
	cin >> cargo;
	
	if(cargo == 101){
		cout << "\tgerente"
		<< "\nsalario atual: " << salario 
		<< "\nnovo salario: " << salario * 1.1 
		<< "\ndiferenca: " << salario * 0.1 << "\n";
	}else{if(cargo == 102){
			cout << "\tengenheiro"
			<< "\nsalario atual: " << salario 
			<< "\nnovo salario: " << salario * 1.2 
			<< "\ndiferenca: " << salario * 0.2 << "\n";
	}else{
		if(cargo == 103){
			cout << "\ttecnico"
		<< "\nsalario atual: " << salario 
		<< "\nnovo salario: " << salario * 1.3
		<< "\ndiferenca: " << salario * 0.3 << "\n";
		}else{
			cout << "\toutros"
		<< "\nsalario atual: " << salario 
		<< "\nnovo salario: " << salario * 1.4 
		<< "\ndiferenca: " << salario * 0.4 << "\n";
		}
	}
	}
	
	system("pause");
}
