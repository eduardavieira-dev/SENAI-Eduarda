#include <iostream>
#include <string>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	float litros;
	
	setlocale(LC_ALL, "portuguese");
	
	cout<<"Digite a quantidade de litros: ";
	cin >> litros;
	
	double suco = (litros/10)*2;
	double agua = (litros/10)*8;
	
	cout << "São necessários " << suco << " litros de suco e " << agua << " de água para fazer " << litros << " litros de suco. " << endl;
	
	
	system("pause");
}
