/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um 
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles 
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades: 
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados; 
• Equiláteros: tem os comprimentos dos três lados iguais; 
• Isósceles: tem os comprimentos de dois lados iguais; • Escaleno: tem os comprimentos dos três 
lados diferentes.*/
#include<iostream>
using namespace std;
int main(){
	float x, y ,z;
	
	cout << "insira os lados x, y, z respectivamente\n";
		cin >> x >> y >> z;
		
	if((x > (y+z))||(y > (x+z))||(z > (x+y))){
		cout << "erro triangulo impossivel";
	}else{
		if(x==y&&y==z){
		cout << "triangulo equilatero";
		}else
			if((x==y&&y!=z)||(x==z&&z!=y)||(y==z&&z!=x))
			cout << "triangulo isoceles";
			else{
				if(x!=y&&y!=z){
				cout << "triangulo escaleno";
				
				}
				
			}
			
	}
	cout << "\n";
system("pause");
}
