#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

	string carros[5]={"Onix", "Corsa", "Chevete", "Uno", "Variant"};

 	for(int x =0; x<5; x++)	{
 		cout<< carros[x]<<endl;
	 }

	string times[]={"Flamengo", "Cruzeiro", "Atletico-MG", "Cuiabá", "Fortaleza", "Santos"};
	// tamanho de das letras
	//int cont= sizeof(times);
	//conta quantas palavras voce colocou no vetor
	int cont= sizeof(times)/ sizeof(string);
	cout<< cont<< endl;
	
	for(int x =0; x<cont; x++)	{
		cout<<times[x]<<endl;
	}
	
	system("pause");
	//return 0;
}
