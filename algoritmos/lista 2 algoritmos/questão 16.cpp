/*Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos 
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a 
carteira.*/
#include<iostream>
using namespace std;
int main(){
	
	int idade;
	
	cout << "quantos anos voce tem? ";
	cin >> idade;
	 if(idade >= 18){
	 	cout << "\n\tpode tirar habilitacao\n";
	 }else{
	 	cout << "\n\tfaltam " << 18 - idade << " anos para tirar a habilitacao\n";
	 }
	system("pause");
}
