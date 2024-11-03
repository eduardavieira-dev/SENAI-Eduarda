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
	
	item produto[4];
	
	for (int x=0; x<3; x++){
	
	cout << "Informe o nome do Produto " << x << " : \n";
	cin >> produto[x].nome;
	cout << "Informe a quantidade do Produto " << x << " : \n";
	cin >> produto[x].quant;
	cout << "Informe a marca do Produto " << x << " : \n";
	cin >> produto[x].marca;
	cout << "Informe o valor do Produto " << x << " : \n";
	cin >> produto[x].valor;
}
cout << "------------------------produtos cadastrados------------------------\n";

	for (int x=0; x<3; x++){
	

cout << "------------------------produto 0" << x << "------------------------\n";
cout << "Nome do produto : " << produto[x].nome << endl;
cout << "quantidade do produto : " << produto[x].quant << endl;
cout << "Valor do produto : " << produto[x].valor << endl;
cout << "Marca do produto : " << produto[x].marca << endl;


}
cout <<"-------------------------------------------------------------------\n";
	
	
	
	
	
	
	
	
	
	system("pause");
}
