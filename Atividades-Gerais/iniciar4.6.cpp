
#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int idade, inicio;
	string iniciar, nome, mnome;
	inicio=100000000;
	while(iniciar!="iniciar" && iniciar!="Iniciar"){
	
	cout<<"Digite 'iniciar' para iniciar o sistema ";
	cin>> iniciar;
	
}

//para x de 0 até 10 faca
	for(int x=0; x < 10; x++){ // x =x+1
	cout<< "Digite o nome: ";
	cin>> nome;
	cout<< "Digite a idade: ";
	cin>> idade;
	
	if(idade<inicio){
		
		inicio=idade;
		mnome=nome;
	}
	
}

cout<< "A pessoa com menor idade é o "<<mnome;
	
	system("pause");
}
