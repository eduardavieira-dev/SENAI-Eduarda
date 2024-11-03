#include <iostream>
#include <string>
#include <locale>


using namespace std;
//estruturar dados

struct item {
	string nome;
	int quant;
	string marca;
	float valor;
	
};


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	item cliente;
	
	cliente.nome = "teclado";
	cliente.quant = 4;
	cliente.marca = "HyperX";
	cliente.valor = 230.99;
	
	cout << cliente.nome;
	
	cout << endl;

	
	system("pause");
}