#include <iostream>
using namespace std;


int main (){
  int linA, colA,linB, colB;
  char esc;
  int matrizA[100][100], matrizB[100][100], matrizC[100][100];
  //declara as matrizes
  cout << "Digite o número de linhas e colunas da matriz A:\n ";
  cin >> linA >> colA;
  cout<< "Digite os valores da matriz A:\n";
    for(int a1= 0; a1 < linA; a1++){
      for(int a2= 0; a2 < colA; a2++){
        cin>> matrizA[a1][a2];
        }
      }
  
  cout << "Digite o número de linhas e colunas da matriz B:\n ";
  cin >> linB >> colB;
  cout<< "Digite os valores da matriz B:\n";
    for(int b1= 0; b1 < linB; b1++){
      for(int b2= 0; b2 < colA; b2++){
        cin>> matrizB[b1][b2];
      }
    }

  //operações
  do{
    cout<< "Escolha a operação que deseja realizar:\n";
    cout<< "+ soma ( A+B )\n - subtração( A-B )\n * multiplicação( A*B )\n / divisão ( A/B )\n I indentidade\n T transposta \n S sair\n";
    cin>> esc;
    
    switch(esc){
      case '+':
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
          cout<< "A matriz C resultante é:\n";
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              cout<< matrizC[a][b]<< "\t";
            }
            cout<<"\n";
          }

        }else{
          cout<< "Não é possível realizar a operação\n";
        }
      break;
      case '-':
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
          cout<< "A matriz C resultante é:\n";
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              cout<< matrizC[a][b]<< "\t";
            }
            cout<<"\n";
          }

        }else{
          cout<< "Não é possível realizar a operação\n";
        }
      break;
      case '*':
        if(colA == linB){
          for(int a1= 0; a1 < linA; a1++){
            for(int a2=0; a2 < colB; a2++){
              matrizC[a1][a2] = 0;
              for(int k=0; k< colA; k++){
                 matrizC[a1][a2] = matrizA[a1][k] * matrizB[k][a2];
              }
            }
          }
          cout<< "A matriz C resultante é:\n";
          for(int a=0; a< linA; a++){
            for (int b=0; b< colA; b++){
              cout<< matrizC[a][b]<< "\t";
            }
            cout<<"\n";
          }
        }else{
          cout<< "Não é possível realizar a operação\n";
        }
      break;
      case '/':
        for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }
        int div, esc;
        do{
          cout<< "quer dividir A por B (opção 1)\n, B por A (opção 2)\n A por A ou B por B (opção 3)?\n A por numero (opção 4)\n B por numero (opção 5)\n Sair (opção 6)\n";
          switch(esc){
            case 1:
              if(linA == linB == colA== colB){
                for (int i = 0; i < linA; i++) {
                  for (int j = 0; j < colA; j++) {
                    if(i == j){
                      matrizC[i][j] = matrizA[linA-i][colA-j];
                    }else{
                        matrizC[i][j] -= matrizA[i][j];
                    }
                  }
                }
                if(colB == linA){
                  for(int a1= 0; a1 < linB; a1++){
                    for(int a2=0; a2 < colA; a2++){
                      for(int k=0; k< colB; k++){
                         matrizC[a1][a2] = matrizB[a1][k] * matrizC[k][a2];
                      }
                    }
                  }
                }
              }else{
                cout<< "Não é possível realizar a operação\n";
              }
            break;
            case 2:
              if(linA == linB == colA== colB){
                for (int i = 0; i < linB; i++) {
                  for (int j = 0; j < colB; j++) {
                    if(i == j){
                      matrizC[i][j] = matrizB[linB-i][colB-j];
                    }else{
                        matrizC[i][j] -= matrizB[i][j];
                    }
                  }
                }
                if(colA == linB){
                  for(int a1= 0; a1 < linA; a1++){
                    for(int a2=0; a2 < colB; a2++){
                      for(int k=0; k< colA; k++){
                         matrizC[a1][a2] = matrizA[a1][k] * matrizC[k][a2];
                      }
                    }
                  }
                }

              }else{
                cout<< "Não é possível realizar a operação\n";
              }
            break;
            case 3:
              cout<< "A matriz C resultante é:\n";
              for (int i = 0; i < linA; i++) {
                for (int j = 0; j < colA; j++) {
                    matrizC[i][j] = 1;
                }
              }
            break;
            case 4:
            cout<< "Vai dividir por qual número?\n";
            cin>> div;
            if(div!= 0){
              for(int a1= 0; a1 < linA; a1++){
                for(int a2=0; a2 < colA; a2++){
                  matrizC[a1][a2] = matrizA[a1][a2] /div;
                }
              }
              cout<< "A matriz C resultante é:\n";
              for(int a=0; a< linA; a++){
                for (int b=0; b< colA; b++){
                  cout<< matrizC[a][b]<< "\t";
                }
                cout<<"\n";
              }
            }else{
              cout<< "Não é possível realizar a operação\n";
            }
            break;
            case 5:
              cout<< "Vai dividir por qual número?\n";
              cin>> div;
              if(div!= 0){
                for(int a1= 0; a1 < linA; a1++){
                  for(int a2=0; a2 < colA; a2++){
                    matrizC[a1][a2] = matrizB[a1][a2] /div;
                  }
                }
                cout<< "A matriz C resultante é:\n";
                for(int a=0; a< linA; a++){
                  for (int b=0; b< colA; b++){
                    cout<< matrizC[a][b]<< "\t";
                  }
                  cout<<"\n";
                }
              }else{
                cout<< "Não é possível realizar a operação\n";
              }
            break;
            default:
            cout<< "Operação Inválida\n";
          }
        }while(esc != 6);
      break;
      case 'I':
        cout<<"Você quer a identidade de qual matriz?\n A (opção 1)\n B (opção 2)\n";
        cin>>esc;
        switch(esc){
          case 1:
            for(int a1= 0; a1 < linA; a1++){
              for(int a2=0; a2 < colA; a2++){
                if(a1==a2){
                matrizC[a1][a2] = 1;
                }else{
                  matrizC[a1][a2] = 0;
                }
              }
            }
          break;
          case 2:
            for(int a1= 0; a1 < linB; a1++){
              for(int a2=0; a2 < colB; a2++){
                if(a1==a2){
                matrizC[a1][a2] = 1;
                }else{
                  matrizC[a1][a2] = 0;
                }
              }
            }
          break;
          default:
          cout<<"Operação inválida\n";
        }
      break;
      case 'T':
        for (int i = 0; i < linA; i++) {
          for (int j = 0; j < colA; j++) {
              matrizC[i][j] = 0;
          }
        }
        cout<<"Quer a transposta de A (opção 1)\n, B (opção 2)?\n";
        cin>>esc;
        switch(esc){
          case 1:
            for (int j = 0; j < linA; j++) {
              for (int i = 0; i < colA; i++) {
                  matrizC[j][i] = matrizA[j][i];
              }
            }
            cout<<"A matriz C resultante é:\n";
            for (int j = 0; j < linA; j++) {
              for (int i = 0; i < colA; i++) {
                  matrizC[j][i];
              }
            }
          break;
          case 2:
            for (int j = 0; j < linB; j++) {
              for (int i = 0; i < colB; i++) {
                  matrizC[j][i] = matrizB[j][i];
              }
            }
            cout<<"A matriz C resultante é:\n";
            for (int j = 0; j < linB; j++) {
              for (int i = 0; i < colB; i++) {
                  matrizC[j][i];
              }
            }
          break;
          default:
          cout<< "inválido\n";
          
        }
      break;
      default:
      cout<<"Operação inválida\n";
    }
  }while(esc != 'S');
}