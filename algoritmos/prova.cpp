#include<iostream>
using namespace std;
int main(){

    //variaveis
    int matricula, senha, senhasis = 1111, opcaoadm=0, opcaocliente=0, alvo, numexe, cont, decrecont, matmindec, mindec=9999, sessoes = 0, exetot = 0;
    float inferior=0, superior=0, abdomen=0, costas=0, outros=0, carga, cargatot=0, cargaant, decremento, decremax, media;
    char usuario;
 

	cout << "\tbem vindo a academia EuMalhoAsVezes.com\n";
	
	do{
	    cout << "digite o tipo de usuario: \n";
	    cin >> usuario;
	    cout << "digite a matricula: \n";
	    cin >> matricula;
	    cout << "digite a senha: \n";
	    cin >> senha;
		
		if(senha != senhasis || (usuario != 'c' && usuario != 'C' && usuario != 'a' && usuario != 'A')){
			cout << "\n\tinformacoes invalidas sessao nao iniciada\n";
			system("pause");
	    	system("cls");
	    }else{
	    	cout << "sessao iniciada com sucesso\n";
	    	system("pause");
	    	system("cls");
			switch(usuario){
		        case 'c':
		        case 'C':
		        	inferior = 0;
		        	superior = 0;
		        	abdomen = 0;
		        	costas = 0;
		        	outros = 0;
		        	cargaant = 0;
		        	cargatot = 0;
		        	sessoes++;
			        do{	
						cout << "\nMenu Cliente\n--------------------\n1 - Exercicios por alvo\n2 - informar carga atual\n3 - logoff do cliente\n--------------------";
						cout << "\n escolha uma opcao ";
						cin >> opcaocliente;
						switch(opcaocliente){
							case 1:
								cout << "informe a quantidade de exercicios dessa sessao ";
								cin >> numexe;
								exetot+=numexe;
								system("cls");
								
								decremento = 0;
								for(cont = 1;cont <= numexe;cont++){
									cout << "alvos\n--------------------\n1 - inferiores\n2 - superiores\n3 - abdomen\n4 - costas\n5 - outros\n--------------------";
									cin >> alvo;
									cout << "informe a carga em kg para o exercicio N." << cont << endl;
									cin >> carga;
									switch(alvo){
										case 1:
											inferior+=carga;
											break;
										case 2:
											superior+=carga;
											break;
										case 3:
											abdomen+=carga;
											break;
										case 4:
											costas+=carga;
											break;
										default:
											outros+=carga;	
											break;
									}
									if(carga<cargaant){
										decremento = cargaant - carga;
										if(decremento>decremax){
											decremax = decremento;
										}
										decrecont++;
									}
									cargaant = carga;
									cargatot+=carga;
									system("pause");
									system("cls");
									
								}
								
							break;
						case 2:
							cout << "a carga total ate o momento " << cargatot << "Kg\n";
							system("pause");
							system("cls");
						
							break;
						case 3:
							if(decrecont<mindec){
								mindec=decrecont;
								matmindec = matricula;
							}
							cout << "Cargas totais de cada Alvo\n\ninferiores " << inferior << "Kg\nsuperiores " << superior << "Kg\nabdomen " << abdomen << "Kg\ncostas " << costas << "Kg\noutros " << outros << "Kg\n";
							system("pause");
							system("cls");
							break;
							
						default:
							cout << "\n--------------------\nopcao invalida\n--------------------\n";
							system ("pause");
							system ("cls");
					}
			  
				}while(opcaocliente != 3);
				
				 break;
			    case 'a':
			    case 'A':
			    	do{
				    	cout << "menu administrador\n--------------------\n1- analise de exercicios\n2- maiores drecrementos\n3- alterar senha\n4- finalizar o sistema\n";
				    	cout << "escolha uma opcao ";
				    	cin >> opcaoadm;
				    	switch(opcaoadm){
						case 1:
							media = exetot/sessoes;
							cout << "a media de exercicios foi " << media << endl;
							system("pause");
							system("cls");
							
							break;
						case 2:
							cout << "maior decremento foi " << decremax;
							cout << "\n a matricula com o minimo de decrementos foi N. " << matmindec << endl;
							system("pause");
							system("cls");
							break;
						
						case 3:
							do{
								cout << "digite a nova senha ";
								cin >> senhasis;
							}while(senhasis<1||senhasis>9999);
							system("pause");
							system("cls");
						break;
						default:
							opcaoadm = 4;
							cout << "sistema encerrado com sucesso\n";
							system("pause");
							system("cls");
						}
			    	}while(opcaoadm!=4);
			    	
			    	
			    break;
		    }
		}
	}while(opcaoadm!=4);

}
