#include <iostream>
#include <locale>
#include <string>

using namespace std;

struct item {
	int numero;
	string nome;
	float altura;
};

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float mais_baixo = 1000000;
	float mais_alto = 0;
	int nmaior = 0;
	int nmenor = 10000000;
	string nome_baixo, nome_alto;
	
	item escola[11];
	
	for (int x = 1; x < 11; x++) {
		cout << " ___________________________" << endl;
		cout << "|__________Aluno " << x << "__________|" << endl;
		cout << "| Informe o nome do aluno   |" << endl;
		cout << "| ";
		cin >> escola[x].nome;
		cout << "| Informe a altura do aluno |" << endl;
		cout << "| ";
		cin >> escola[x].altura;
		cout << "|___________________________|" << endl;
		
		if (escola[x].altura > mais_alto) {
			nmaior = x;
			mais_alto = escola[x].altura;
			nome_alto = escola[x].nome;
		}
		
		if (escola[x].altura < mais_baixo) {
			nmenor = x;
			mais_baixo = escola[x].altura;
			nome_baixo = escola[x].nome;
		}
	}
	
	system("cls");
	
		cout << " ___________________________" << endl;
		cout << "|_________Mais Alto_________|" << endl;
	cout << "| Código: " << nmaior << endl;
	cout << "| Nome: " << nome_alto << endl;
	cout << "| Altura: " << mais_alto << endl << endl;
	
		cout << " ____________________________" << endl;
		cout << "|_________Mais Baixo_________|" << endl;
	cout << "| Código: " << nmenor << endl;
	cout << "| Nome: " << nome_baixo << endl;
	cout << "| Altura: " << mais_baixo << endl << endl;
	
	system("pause");
}
