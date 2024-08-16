#include <iostream>
using namespace std;

void soma(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);
void subtracao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);
void multiplicacao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);
void divisao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);
void identidade(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);
void transposta(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]);

int main(){

    int linA, linB, colA, colB;
    char esc;
    int matrizA[100][100], matrizB[100][100], matrizC[100][100];

    cout << "Digite o numero de linhas e colunas da matriz A:\n";
    cin >> linA >> colA;
    cout<< "Digite os valores da matriz A:\n";
    for(int a1= 0; a1 < linA; a1++){
      for(int a2= 0; a2 < colA; a2++){
        cin>> matrizA[a1][a2];
        }
      }
    system("cls");
  
  cout << "Digite o numero de linhas e colunas da matriz B:\n";
  cin >> linB >> colB;
  cout<< "Digite os valores da matriz B:\n";
    for(int b1= 0; b1 < linB; b1++){
      for(int b2= 0; b2 < colB; b2++){
        cin>> matrizB[b1][b2];
      }
    }

do{
    system("cls");
    cout<< "Escolha a operacao que deseja realizar:\n";
    cout<< " + soma ( A+B )\n - subtracao( A-B )\n * multiplicacao( A*B )\n / divisao ( A/B )\n I indentidade\n T transposta \n S sair\n";
    cin>> esc;

    switch(esc){
        case '+':
            cout << "a matriz resultante e" << endl;
            soma(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case '-':
            cout << "a matriz resultante e" << endl;
            subtracao(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case '*':
            cout << "a matriz resultante e" << endl;
            multiplicacao(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case '/':
            divisao(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case 'I':
        case 'i':
            identidade(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case 'T':
        case 't':
            transposta(linA, linB, colA, colB,matrizA, matrizB);
        break;
        case 'S':
        case 's':
        cout << "Saindo do sistema aaaaaaaaaaaaa\n";
        return 0;
        break;
        default:
        cout << "Invalido\n";
    }

}while(esc != 'S');


}
void soma(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100];
        for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }

        if(linA== linB && colA==colB){
          for(int a1= 0; a1 < linA; a1++){
            for(int a2= 0; a2 < colA; a2++){
                matrizC[a1][a2] = matrizA[a1][a2] + matrizB[a1][a2];
            }
          }
          
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              
              cout << matrizC[a][b] << "\t";
            }
            cout<<"\n";
          }

        }else{
          cout<< "Não e possível realizar a operacao\n";
        }
    system("pause");
    system("cls");

}
void subtracao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100];
        for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }

        if(linA== linB && colA==colB){
          for(int a1= 0; a1 < linA; a1++){
            for(int a2= 0; a2 < colA; a2++){
                matrizC[a1][a2] = matrizA[a1][a2] - matrizB[a1][a2];
            }
          }
          
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              
              cout << matrizC[a][b] << "\t";
            }
            cout<<"\n";
          }

        }else{
          cout<< "Não é possível realizar a operacao\n";
        }
    system("pause");
    system("cls");

}
void multiplicacao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100];
     for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }
        if(colA== linB){
          for(int a1= 0; a1 < linA; a1++){
            for(int a2= 0; a2 < colB; a2++){
                for(int col= 0; col< colA; col++){
                 matrizC[a1][a2] = matrizA[a1][col] * matrizB[col][a2];
                }
            }
          }
          
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              
              cout << matrizC[a][b] << "\t";
            }
            cout<<"\n";
          }

        }else{
          cout<< "Não é possível realizar a operacao\n";
        }
    system("pause");
    system("cls");
}
void divisao(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100], esc;
    float div;
     for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }

        do{
            cout<< "Quer dividir(Digite a opcao)\n A por B (opcao 1)\n B por A (opcao 2)\n A por A ou B por B (opcao 3) \
         \n A por numero (opcao 4)\n B por numero (opcao 5)\n Sair (opcao 6)\n";
        cin>> esc;
        system("cls");
            switch(esc){
                case 1:
                if(linA == linB == colA== colB){
                    for (int i = 0; i < linA; i++) {
                    for (int j = 0; j < colA; j++) {
                        if(i == j){
                        matrizC[i][j] = matrizA[linA-i][colA-j];
                        cout << matrizC[i][j]<<"\t";
                        }else{
                            matrizC[i][j] -= matrizA[i][j];
                            cout << matrizC[i][j]<<"\t";
                        }
                        cout<<"\n";
                    }
                    }
                    if(colB == linA){
                    for(int a1= 0; a1 < linB; a1++){
                        for(int a2=0; a2 < colA; a2++){
                        for(int k=0; k< colB; k++){
                            matrizC[a1][a2] = matrizB[a1][k] * matrizC[k][a2];
                            cout << matrizC[a1][a2]<<"\t";
                        }
                        }
                        cout<<"\n";
                    }
                    }
                }else{
                    cout<< "Nao e possivel realizar a operacao\n";
                }
                system("pause");
                system("cls");
                break;
                case 2:
                if(linA == linB == colA== colB){
                    for (int i = 0; i < linB; i++) {
                    for (int j = 0; j < colB; j++) {
                        if(i == j){
                        matrizC[i][j] = matrizB[linB-i][colB-j];
                        cout << matrizC[i][j]<<"\t";
                        }else{
                            matrizC[i][j] -= matrizB[i][j];
                            cout << matrizC[i][j]<<"\t";
                        }
                        cout<<"\n";
                    }
                    }
                    if(colA == linB){
                    for(int a1= 0; a1 < linA; a1++){
                        for(int a2=0; a2 < colB; a2++){
                        for(int k=0; k< colA; k++){
                            matrizC[a1][a2] = matrizA[a1][k] * matrizC[k][a2];
                            cout << matrizC[a1][a2]<<"\t";
                        }
                        }
                        cout<<"\n";
                    }
                    }

                }else{
                    cout<< "Nao e possivel realizar a operacao\n";
                }
                system("pause");
                system("cls");
                break;
                case 3:
                cout<< "A matriz C resultante e:\n";
                for (int i = 0; i < linA; i++) {
                    for (int j = 0; j < colA; j++) {
                        matrizC[i][j] = 1;
                        cout << matrizC[i][j]<<"\t";
                    }
                    cout<<"\n";
                }
                system("pause");
                system("cls");
                break;
                case 4:
                cout<< "Vai dividir por qual numero?: ";
                cin>> div;
                if(div!= 0){
                for(int a1= 0; a1 < linA; a1++){
                    for(int a2=0; a2 < colA; a2++){
                    matrizC[a1][a2] = matrizA[a1][a2] /div;
                    cout << matrizC[a1][a2]<<"\t";
                    }
                    cout<<"\n";
                }
                
                }else{
                cout<< "Nao e possivel realizar a operacao\n";
                }
                system("pause");
                system("cls");
                break;
                case 5:
                cout<< "Vai dividir por qual numero?: ";
                cin>> div;
                if(div!= 0){
                    for(int a1= 0; a1 < linA; a1++){
                    for(int a2=0; a2 < colA; a2++){
                        matrizC[a1][a2] = matrizB[a1][a2] /div;
                        cout << matrizC[a1][a2]<<"\t";
                    }
                    cout<<"\n";
                    }
                }else{
                    cout<< "Nao e possivel realizar a operacao\n";
                }
                system("pause");
                system("cls");
                break;
                case 6:
                cout << "adioooooss\n";
                system("pause");
                system("cls");
                break;
                default:
                cout<< "Operacao Invalida\n";
                system("pause");
                system("cls");
            }
        }while (esc != 6);
        
}
void identidade(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100],esc;
    for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }
     cout<<"Voce quer a identidade de qual matriz? (digite a opcao)\n A (opcao 1)\n B (opcao 2)\n";
     cin>>esc;
     system("cls");
        switch(esc){
          case 1:
            for(int a1= 0; a1 < linA; a1++){
              for(int a2=0; a2 < colA; a2++){
                if(a1==a2){
                matrizC[a1][a2] = 1;
                cout<< matrizC[a1][a2]<<"\t";
                }else{
                  matrizC[a1][a2] = 0;
                  cout<< matrizC[a1][a2]<<"\t";
                }
              }
               cout << "\n";
            }
            system("pause");
            system("cls");
          break;
          case 2:
            for(int a1= 0; a1 < linB; a1++){
              for(int a2=0; a2 < colB; a2++){
                if(a1==a2){
                matrizC[a1][a2] = 1;
                cout<< matrizC[a1][a2]<<"\t";
                }else{
                  matrizC[a1][a2] = 0;
                  cout<< matrizC[a1][a2]<<"\t";
                }
              }
              cout << "\n";
            }
            system("pause");
            system("cls");
          break;
          default:
          cout<<"Operacao invalida\n";
          system("pause");
          system("cls");
        }

}
void transposta(int linA, int linB, int colA, int colB, int matrizA[100][100],int matrizB[100][100]){
    int matrizC[100][100],esc;
    for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }
       cout<<"Quer a transposta de qual matriz? (digite a opcao)\n A (opcao 1)\n B (opcao 2)?\n";
        cin>>esc;
        system("cls");
        switch(esc){
          case 1:
            for (int j = 0; j < linA; j++) {
              for (int i = 0; i < colA; i++) {
                  matrizC[i][j] = matrizA[j][i];
              }
            }
            cout<<"A matriz C resultante e:\n";
            for (int j = 0; j < linA; j++) {
              for (int i = 0; i < colA; i++) {
                 cout << matrizC[j][i]<< "\t";
              }
              cout<<"\n";
            }
            system("pause");
            system("cls");
          break;
          case 2:
            for (int j = 0; j < linB; j++) {
              for (int i = 0; i < colB; i++) {
                  matrizC[i][j] = matrizB[j][i];
              }
            }
            cout<<"A matriz transposta resultante e:\n";
            for (int j = 0; j < linB; j++) {
              for (int i = 0; i < colB; i++) {
                  cout << matrizC[j][i] << "\t";
              }
              cout << "\n";
            }
            system("pause");
            system("cls");
          break;
          default:
          cout<< "invalido\n";
          system("pause");
          system("cls");
          
        }

}