#include <iostream>
#include <string>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float valor;
	
	cout << "Digite o valor da conta em R$";
	cin >> valor;
	
	system("cls");
	
	int valor_sem_centavos = (valor/3);
	float valor_com_centavos = valor - (valor_sem_centavos*2);
	
	cout << "Valor a ser pago por Carlos: " << valor_sem_centavos << endl;
	cout << "Valor a ser pago por André: " << valor_sem_centavos << endl;
	cout << "Valor a ser pago por João: " << valor_com_centavos << endl;
	
	system("pause");
}
