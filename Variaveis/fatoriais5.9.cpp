#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int x, soma, prod=1;
	
	cout<< "Digite um número que deseja saber o fatorial: ";
	cin>> x;
		
	for(soma=1; soma <=x ; soma++){ 

	prod*=soma;
	
}

cout<< "Resultado do Fatorial: "<<prod<<endl;
	
	system("pause");
}
