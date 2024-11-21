#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	float valor, kg ;



cout<< "Informe em kg o peso do prato:";
cin>>(kg);
valor = kg*58;
cout<< "Valor a pagar:"<< valor<< " reais";


	
	return 0;
}
