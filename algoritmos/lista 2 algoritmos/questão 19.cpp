/*Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado o número referente 
ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.*/
#include<iostream>
using namespace std;
int main(){
	
	int dia;
	
	cout << "insira o numero refente ao dia ";
	cin >> dia;
	
	switch(dia){
		case 1:
			cout << "domingo\nfim de semana";
			break;
			case 2:
				cout << "segunda\ndia util";
				break;
				case 3:
					cout << "terca\ndia util";
					break;
					case 4:
						cout << "quarta\ndia util";
						break;
						case 5:
							cout << "quinta\ndia util";
							break;
							case 6:
								cout << "sexta\ndia util";
								break;
								case 7:
									cout << "domingo\nfim de semana";
									break;
									default:
										cout << "dia invalido";
										break;
	}
	cout << endl;
	system("pause");
}
