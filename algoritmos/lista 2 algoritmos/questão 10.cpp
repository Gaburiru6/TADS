/*A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10, 
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média 
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação 
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media 
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.*/
#include<iostream>
using namespace std;
int main(){
	float not1, not2, not3, media;
	
	cout << "insira as 3 notas do aluno\n";
	cin >> not1 >> not2 >> not3;
	
	if(not1 < 0 || not1 >10 ||not2 < 0 || not2 >10 ||not2 < 0 || not2 >10){
		cout << "nota invalida\n";
	}else{
	
	//media poderada
	media = ((not1 * 2) + (not2 * 3) + (not3 * 5)) / (2+3+5);
	
	cout << "media: " << media << endl;
	
	if(media < 3){
		cout << "reprovado" << endl;
	}else if(media>3&&media<5){
		cout << "recuperacao" << endl;
	}else
		cout << "aprovado" << endl;
	
	}
	system("pause");
}
