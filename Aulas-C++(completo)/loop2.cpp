#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int num, total;
	

	total=1;
	
	
	//fa�a
	do{
	total*=num;
	cout<< "Digite um n�mero: ";
	cin>> num;
	
	}while(num!=0);
	//repita
	
	cout<<"A multiplica��o dos n�meros �: "<<total<<"\n";
	
system("pause");
}
