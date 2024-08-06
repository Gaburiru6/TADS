#include<iostream>
using namespace std;
/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A 
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura 
em Celsius.*/
int main(){
	float c, f;
	
	cout << "insira a temperatura em celsius: ";
		cin >> c;
		
	f = (9*c+160)/5;

cout << "\n a temperatura em fahrenheit sera: "	<< f << "\n";
	
	
system("pause");
}
