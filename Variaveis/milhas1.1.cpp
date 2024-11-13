#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	float km, milha;
	
cout<< "Informe a medida em km para transformar em milhas: ";
cin>> (km);
milha= km/1.609;
cout<< "A medida em milhas é "<< milha;

return 0;
}
