#include<iostream>
#include<string>
using namespace std;

struct cliente{
    int cpf; //chave primaria
    string nome;
    int cel;

};

int consultar(int cpf,int qtd, cliente *p);
void incluir(int cpf, int*pqtd, cliente *p);

int main(){
    int opc;
    int qtd, cpf, resposta;
    cliente agenda[100]; //aqui a struct se torna o tipo da variavel

    do
    {
        cout << "\tbem vindo a agenda\n\tdigite a opcao desejada\n1- incluir\n2- consultar\n3- alterar\n4- excluir\n5- relatorio\n0- encerrar";
        cin >> opc;

        switch(opc){
            case 1:
                //incluir
                cout << "digite o cpf a ser incluso";
                cin >> cpf;
                resposta = consultar(cpf, qtd, agenda);
                if(resposta==-1){
                    cout << "cpf ja cadastrado\n";
                }else{
                    incluir(cpf, &qtd, agenda);
                    cout << "cliente incluido com sucesso";

                }

                break;
            case 2:
                //consultar
                cout << "digite op cpf procurado";
                cin >> cpf;
                resposta = consultar(cpf, qtd, agenda);
                if(resposta!=-1){
                    cout << "cliente localizado";
                    cout << "nome: " << agenda[resposta].nome << endl;
                    cout << "celular" << agenda[resposta].cel << endl;
                }else{
                    cout << "cliente não cadastrado";
                }
                break;
            case 3:
                //alterar
                break;
            case 4:
                //excluir
                break;
            case 5:
                //relatorio
                break;
            case 0:
                cout << "fim do programa";
                break;
            default:
                cout << "opção nao existe";
        
    }

    } while (opc!=0);
    
    

    system("pause");
}

int consultar(int cpf, int qtd, cliente *p){
    int i;
    //laço para pesquisar o cpf
    for (i=0;i<qtd;i++){
        if(p[i].cpf==cpf){
        return i;
        }
    }
    //flag se não encontrar o cpf
    return -1;
}

void incluir(int cpf, int*pqtd, cliente *p){
	getchar();
	p[*pqtd].cpf = cpf; //p = cliente(struct), *pqtd = ponteiro que aponta para qtd(main)
	cout << "\n\tDigite o nome do novo cliente: ";
	getline(cin, p[*pqtd].nome);
	cout << "\n\tDigite o celular do novo cliente: ";
	cin >> p[*pqtd].cel;
	++(*pqtd); //*pqtd = pqtd + 1;
}