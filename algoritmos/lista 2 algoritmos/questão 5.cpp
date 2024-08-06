/*Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, 
conforme a tabela abaixo. Faça um algoritmo que leia o salário e o código do cargo de um funcionário e 
calcule o novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá receber 40% de 
aumento. Mostre o salário antigo, o novo salário e a diferença. 
CÓDIGO CARGO PERCENTUAL 
101 Gerente 10% 
102 Engenheiro 20% 
103 Técnico 30%  */
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
