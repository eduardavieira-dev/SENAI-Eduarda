#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int qtd;
	
	
	cout << "Quantos clientes voc� deseja cadastrar: \n";
	cin >> qtd;
	string nome[qtd];
	int idade[qtd];
	
	for (int x= 0; x< qtd; x++){  
	
		cout << x << "Informe um nome: ";
		cin >> nome[x];
		
		cout << x << "Informe a idade: ";
		cin >> idade[x];
		
		
	}
	
	int cout_users = sizeof(nome)/ sizeof(string);
	
	cout<< "Foram Cadastrados: "<< cout_users<<" ------------|\n";
		for (string i: nome){
			cout<< "Nome: "<<i<< endl;
		
		}
	
	system("pause");
	
	//return 0;
}