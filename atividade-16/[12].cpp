#include <iostream>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	string nome, end;
	int ida;
	
	cout << "Fa�a seu registro \n" << endl;
	cout << "Qual o seu nome \n";
	cout << "-->";
	cin >> nome;
	
	system("cls");
	
	cout << "Qual sua idade \n";
	cout << "-->";
	cin >> ida;
	
	system("cls");
	
	cout << "Informe seu endere�o \n";
	cout << "-->";
	cin >> end;
	
	system("cls");
	
	cout << " _______________________ \n";
	cout << "| Resgistrado Senhor(a) |  \n|";
	cout << "------------------------ \n" << endl << endl;
	
	cout <<"Nome: " << nome << " " << " Idade:" << ida << " Endere�o:" << end << " \n";
	
	
	system("pause");
	//return 0;
}
