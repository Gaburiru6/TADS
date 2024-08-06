#include<iostream>
using namespace std;
main(){
int cigpdia, anos;
float precocarteira, carteirastotal;

	cout << "digite a quantos anos voce fuma, quantos cigarros por dia e o preço da carteira\n";
	cin >> anos >> cigpdia >> precocarteira;

cigpdia = cigpdia * anos * 365;
carteirastotal = cigpdia/20;
cout << "\n voce gastou R$" << carteirastotal * precocarteira << "\n";


system("pause");
}
