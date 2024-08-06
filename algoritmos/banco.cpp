#include <iostream>
using namespace std;
int main(){
	
	int senha, cont=0, opcao;
	char a, d, m, i, n;
	float saldo = 0, deposito, saque, mSaque = 0;
	bool acesso;
	
	do{
		cout << "digite o login e a senha\n";
		cin >> a >> d >> m >> i >> n;
		cin >> senha;
		if(a=='a'&&d=='d'&&m=='m'&&i=='i'&&n=='n'&&senha==1234){
			cout << "\n\tacesso liberado\n";
			system("pause");
			cont = 3;
			acesso = 1;
		}else{
		cont++;
		}
	}
	while(cont<3);
	
	if(acesso!=1){
		cout << "\n\tacesso negado\n";
		system("pause ");
		return 0;
	}
	
	do{
		system("cls");
		cout << "\n\tMENU PRINCIPAL\n\t--------------------\n\t1 - SALDO\n\t2 - DEPOSITO\n\t3 - SAQUE\n\t4 - MAIOR SAQUE\n\t5 - SAIR\n\t--------------------\n\tEscolha a opcao desejada: ";
		cin >> opcao;
		system("cls");
		
		switch(opcao){
			case 1:
				cout << "seu saldo atual R$" << saldo << endl;
				break;
			case 2:
				cout << "quanto deseja depositar? \nR$ ";
				cin >> deposito;
				saldo = saldo+deposito;
				break;
			case 3:
				cout << "quanto deseja sacar? \nR$";
				cin >> saque;
				saldo = saldo-saque;
				if(saque>mSaque){
					mSaque=saque;
				}
				break;
			case 4:
				cout << "o maior saque foi R$" << mSaque << endl;
				break;
			case 5:
				cout << "ate a proxima vez\n";
				break;
			default:
				cout << "opcao invalida\n";
		}
		system("pause");
	}
	while(opcao!=5);
}
