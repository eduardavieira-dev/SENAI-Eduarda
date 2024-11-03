#include <iostream>
#include <string>
#include <locale>


using namespace std;
//estruturar dados

struct {
	string nome;
	int quant;
	string marca;
	float valor;
	
}produto;


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	produto.nome = "teclado";
	produto.quant = 4;
	produto.marca = "HyperX";
	produto.valor = 230.99;
	
	cout << produto.nome;
	
	cout << endl;
	
	system("pause");
}