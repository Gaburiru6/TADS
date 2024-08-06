/*Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a 
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N 
motoristas: 
- O número da carteira de motorista (inteiro); 
- Número de multas; 
- O valor de cada uma das multas. 
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados 
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista 
que obteve o maior número de multas.*/
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
