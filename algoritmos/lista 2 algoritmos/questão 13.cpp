/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por 
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela 
abaixo: 
CONSUMO (Km/l) MENSAGEM 
Menor que 8 Venda o carro! 
Entre 8 e 12 Econômico! 
Maior que 12 Super econômico! */
#include<iostream>
using namespace std;
int main(){
	
	float gas, dis, media;
	
	cout << "quantos km voce andou ";
	cin >> dis;
	cout << "quantos litros de gasolina o carro consumiu ";
	cin >> gas;
	
	media = dis/gas;
	
	if(media < 8){
		cout << "venda o carro!\n";
	}else{
		if(media >=8 && media <= 12){
		cout << "economico!\n";
	}else{
		if(media > 12){
			cout << "super economico\n";
		}
	}
	}
	
	system("pause");
}
