#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float c, f ;



cout<<"Informe a temperatura em celsius� para ser convertida em fahrenheit: ";
cin>>(c);
f=c*1.8+32;
cout<<"A temperatura em fahrenheit � igual a: " << f;

	
	
	return 0;
}
