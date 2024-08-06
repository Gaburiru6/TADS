/*Calcular o valor a ser pago por um plano de saúde dada a idade do conveniado. Considere que todos 
pagam R$ 100 mais um adicional conforme a seguinte tabela: 
• Crianças com menos de 10 anos pagam R$80; 
• Conveniados com idade entre 10 e 30 anos pagam R$50; 
• Conveniados com idade entre 31 e 60 anos pagam R$ 95; 
• Conveniados com mais de 60 anos pagam R$130.*/
#include<iostream>
using namespace std;
int main(){
	
	int idade;
	
	cout<< "digite sua idade ";
	cin>> idade;
	
	if(idade<10){
		cout << "valor R$180,00";
	}
	if(idade>=10&&idade<=30){
		cout << "valor R$150,00";
	}
	if(idade>=31&&idade<=60){
		cout << "valor R$195,00";
	}
	if(idade>60){
		cout << "valor R$230,00";
	}
	cout<<endl;
	system("pause");
}
