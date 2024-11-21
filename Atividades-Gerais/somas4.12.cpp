#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int soma, n1, n2,aux;
	soma=0;
	

	
	cout<< "Digite um número para a soma: ";
	cin>> n1;
	
	cout<< "Digite outro número para a soma: ";
	cin>> n2;
		
	for(aux=1; aux <=n2 ; aux++){ 

	soma+=aux;
	
	
}

cout<< "Resultado da Soma: "<<soma<<endl;
	
	system("pause");
}
