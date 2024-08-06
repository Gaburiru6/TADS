/*Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/
#include<iostream>
using namespace std;
int main(){
	
	float total, vpar;
	int qpar;
	
	cout << "insira o valor total da compra ";
	cin >> total;
	cout << "insira o valor das parcelas ";
	cin >> vpar;
	cout << "insira a quantidade de parcelas ";
	cin >> qpar;
	
	if(vpar*qpar==total){
		cout << "\n\tsem juros\n";
	}else{
		cout << "\n\tcom juros\n";
	}
	
	system("pause");
}
