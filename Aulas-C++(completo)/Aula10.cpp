#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int num, total;
	

	total=1;
	
	
	//faça
	do{
	total*=num;
	cout<< "Digite um número: ";
	cin>> num;
	
	}while(num!=0);
	//repita
	
	cout<<"A multiplicação dos números é: "<<total<<"\n";
	
system("pause");
}