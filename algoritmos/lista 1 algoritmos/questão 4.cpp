#include<iostream>
using namespace std;
int main(){
	
	int N;
	float percentual, total;
	
	cout<< "escreva um numero inteiro\n";
	cin>> N;
	cout<< "escreva um percentual\n";
	cin>> percentual;
	
	total = N *(percentual/100);
	
	cout<< "\n\t" << percentual << "% de " << N << " = " << total << "\n";
	
	//coreção - a questão pedia o percentual aplicado
	
	cout << "\no percentual aplicado e: " << N + total << "\n";
	
system("pause");
}
