/*Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e 
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/
#include<iostream>
using namespace std;
int main(){

	int num;
	char let;
	
	cout << "insira um numero inteiro\n";
	cin >> num;
	cout << "digite 'a' para antecessores e 's' para sucessores\n";
	cin >> let;
	
	if(let == 'a'){
		cout << "a soma dos 10 antecessores de " << num << "e: ";
		cout << (num-1)+(num-2)+(num-3)+(num-4)+(num-5)+(num-6)+(num-7)+(num-8)+(num-9)+(num-10);
	}else{
		if(let == 's')
			cout << "a soma dos 10 sucessores de " << num << "e: ";
			cout << (num+1)+(num+2)+(num+3)+(num+4)+(num+5)+(num+6)+(num+7)+(num+8)+(num+9)+(num+10);
	}
	cout << "\n";
	system("pause");
}
