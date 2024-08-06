/*O cardápio de uma lanchonete é o seguinte: 
Sanduíche 
Código Descrição Preço Unitário 
100 Cachorro quente 1,10 
101 Baurú simples 1,30 
102 Baurú com ovo 1,50 
103 Hamburger 1,10 
104 Cheesburger 1,30 
Bebida 
Código Descrição Preço Unitário 
105 Refrigerante 1,00 
106 Suco 2,00 
107 Nescau 1,50 
Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade 
de cada um e calcule o valor a ser pago por aquele lanche.*/
#include<iostream>
using namespace std;
int main(){
	int codcom, codbeb, qtdcom, qtdbeb;
	float pcom, pbeb;
	
	cout << "\t\\_CARDAPIO_/\n"
	<< "\nsanduiche\n" 
	<< "cod | descricao | preco\n"
	<< "100 Cachorro quente 1,10\n" 
	<< "101 Bauru simples 1,30\n"
	<< "102 Bauru com ovo 1,50\n" 
	<< "103 Hamburger 1,10\n" 
	<< "104 Cheesburger 1,30\n"
	<< "\nbebidas\n"
	<< "105 Refrigerante 1,00\n"
	<< "106 Suco 2,00\n" 
	<< "107 Nescau 1,50\n"; 
	
	cout << "insira o codigo do sanduiche e a quantidade respectivamente\n";
	cin >> codcom >> qtdcom;
	cout << "agora faca o mesmo com a bebida\n";
	cin >> codbeb >> qtdbeb;
	
	switch(codcom){
		case 100:
			pcom = 1.1;
			cout << "\tcachorro quente\n";
			break;
			case 101:
				pcom = 1.3;
				cout << "\tbauru simples\n";
				break;
				case 102:
					pcom = 1.5;
					cout << "\tbauru com ovo\n";
					break;
					case 103:
						pcom = 1.1;
						cout << "\thamburguer\n";
						break;
						case 104:
							pcom = 1.3;
							cout << "\tcheeseburger\n";
							break;
	}
	
	switch(codbeb){
		case 105:
			pbeb = 1;
			cout << "\tefrigerante\n";
			break;
			case 106:
				pbeb = 2;
				cout << "\tsuco\n";
				break;
				case 107:
					pbeb = 1.5;
					cout << "\tnescau\n";
					break;
	}
	
	cout << "\ntotal = R$" << (pbeb*qtdbeb) + (pcom*qtdcom) << "\n";
	system("pause");
}
