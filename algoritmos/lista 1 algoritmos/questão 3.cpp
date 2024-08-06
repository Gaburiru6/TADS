#include<iostream>
#include<iomanip>
using namespace std;
main(){
	cout<<fixed;
	cout.precision(2);
	int npar;
	float preco, parcelas;
	cout << "digite o valor da compra: ";
	cin >> preco;
	cout << "\ndigite o numero de parcelas ";
	cin >> parcelas;
	
	npar = parcelas;
	
	if(parcelas > 10 || parcelas <= 0){
	cout << "\nerro numero de parcelas invalido\n";
	}else{
	cout << "\nficarao " << npar << " parcelas de " << preco / parcelas << "\n";}


system("pause");
}
