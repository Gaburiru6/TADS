/*Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou 
não se aposentar. As condições para aposentadoria são: 
• Ter pelo menos 65 anos; 
• Ou ter trabalhado pelo menos 30 anos; 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/
#include<iostream>
using namespace std;
int main(){
	
	int idade, anos;
	
	cout << "digite sua idade ";
	cin >> idade;
	cout << "digite ha quantos anos voce trabalha ";
	cin >> anos;

	if(idade >= 65){
		cout << "\n\tpode se aposentar\n";
	}else
		if(anos >= 30){
		cout << "\n\tpode se aposentar\n";
	}else
		if(idade >= 60 && anos >= 25){
		cout << "\n\tpode se aposentar\n";
	}else{
		cout << "\n\tnao pode se aposentar ainda\n";
	}
	
	
	system("pause");
}
