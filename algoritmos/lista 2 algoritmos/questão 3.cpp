/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino). 
Utilize as seguintes fórmulas para cálculo do peso ideal: 
• Masculino = (72,7 x altura) - 58 
• Feminino = (62,1 x altura) - 44,7 */
#include<iostream>
using namespace std;
int main(){
	float h;
	char gen;
	
	cout << "insira altura em metros\n";
		cin >> h;
	cout << "insira f para feminino e m para masculino\n";
		cin >> gen;
		
		if(gen == 'm'){
			cout << "seu peso ideal e: " << (72.7 * h) - 58 << "\n";
		}else{
			if(gen == 'f'){
				cout << "seu peso ideal é: " << (62.1 * h) - 44.7 << "\n";
				
			}
		}
	
	
system("pause");
}
