#include<iostream>
using namespace std;
main(){
	int anos,meses,dias;
	cout << "digite sua idade em anos, meses e dias\n";
	cin >> anos >> meses >> dias;

anos = anos*360;
meses = meses*30;

	cout << "\nsua idade em dias ate agora\n\t";
	cout << anos+meses+dias << "\n";

system("pause");
}
