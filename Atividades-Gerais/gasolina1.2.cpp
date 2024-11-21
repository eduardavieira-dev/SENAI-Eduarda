#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	float x, litros;



cout<< "Quantos reais de gasolina deseja colocar no tanque? ";
cin>>(x);
litros = x/3;
cout<< "A quantidade de gasolina em litros colocada no tanque é: " << litros;
	
	return 0;
}
