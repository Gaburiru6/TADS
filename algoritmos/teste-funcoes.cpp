#include <iostream>
using namespace std;

int soma(int a, int b);
//quando modificar a funcao, deve-se modificar a declaração tambem

int main(){
    int a, b;
    a = 10;
    b = 5;
    int c = soma(a,b);
    cout << c;

}

int soma(int a, int b){
    int c = a+b;
    return c;
}