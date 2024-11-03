#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int valor;
	cout<< "Informe um valor: ";
	cin>> valor;
	
	system("pause");
	
	// return 0;
}
