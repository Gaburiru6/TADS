/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplica��o de multas de tr�nsito. O algoritmo deve ler as seguintes informa��es para cada um dos N 
motoristas: 
- O n�mero da carteira de motorista (inteiro); 
- N�mero de multas; 
- O valor de cada uma das multas. 
Deve ser impresso o valor da d�vida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somat�rio de todas as multas). O algoritmo dever� imprimir tamb�m o n�mero da carteira do motorista 
que obteve o maior n�mero de multas.*/
#include<iostream>
using namespace std;
int main(){
	
	int carteira, carteiramax, numMultas, multamax = 0, valor, valtot = 0, valger = 0, cont;
	char prox;
	
	do{
		valtot = 0;
		cout<< "digite o numero da carteira de motorista\n";
		cin >> carteira;
		cout << "quantas multas ele tem?\n";
		cin >> numMultas;
		
		if(numMultas > multamax){
			multamax = numMultas;
			carteiramax = carteira;
		}
		
		cont = 1;
		while(cont <= numMultas){
			cout << "digite o valor da multa "<<cont<<endl;
			cin >> valor;
			valtot = valtot + valor;
			cont++;
		}
		valger = valger + valtot;
		cout << "total: "<< valtot << endl;
		cout << "\ndeseja adicionar outro motorista? 's' ou 'n'\n";
		cin >> prox;
	}while(prox == 's');
	
	cout << "o valor de todas as multas foi: R$" << valger << endl;
	cout << "quem mais recebeu multas foi a carteira N " << carteiramax << endl;
	
	system("pause");
}
