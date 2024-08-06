/*Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e 
escreva-os na ordem solicitada.*/
#include<iostream>
using namespace std;
int main(){
	int n1, n2, n3;
	char ordem;
	
	cout << "insira 3 numeros inteiros\n";
	cin >> n1 >> n2 >> n3;
	cout << "digite 'c' para crescente e 'd' para descrescente\n";
	cin >> ordem;

		switch(ordem == 'c'){
	case 1:
		n1 < n2 && n2 < n3;
		cout << "em ordem crescente "<< n1 << " " << n2 << " " << n3;
		break;
		case 2:
			n1 < n3 && n3 < n2;
			cout << "em ordem crescente "<< n1 << " " << n3 << " " << n2;
			break;
			case 3:
				n2 < n3 && n3 < n1;
				cout << "em ordem crescente "<< n2 << " " << n3 << " " << n1;
				break;
				case 4:
					n2 < n1 && n1 < n3;
					cout << "em ordem crescente "<< n2 << " " << n1 << " " << n3;
					break;
					case 5:
						n3 < n1 && n1 < n2;
						cout << "em ordem crescente "<< n3 << " " << n1 << " " << n2;
						break;
						case 6:
							n3 < n2 && n2 < n1;
							cout << "em ordem crescente "<< n3 << " " << n2 << " " << n1;
							break;
	}
	switch(ordem == 'd'){
		case 1:
		n1 > n2 && n2 > n3;
		cout << "em ordem decescente "<< n1 << " " << n2 << " " << n3;
		break;
		case 2:
			n1 > n3 && n3 > n2;
			cout << "em ordem decescente "<< n1 << " " << n3 << " " << n2;
			break;
			case 3:
				n2 > n3 && n3 > n1;
				cout << "em ordem decescente "<< n2 << " " << n3 << " " << n1;
				break;
				case 4:
					n2 > n1 && n1 > n3;
					cout << "em ordem decescente "<< n2 << " " << n1 << " " << n3;
					break;
					case 5:
						n3 > n1 && n1 > n2;
						cout << "em ordem decescente "<< n3 << " " << n1 << " " << n2;
						break;
						case 6:
							n3 > n2 && n2 > n1;
							cout << "em ordem decescente "<< n3 << " " << n2 << " " << n1;
							break;
	}


	system("pause");
}
