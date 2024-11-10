#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;


void suspeito(){
	string resp[10];
	cout << "Telefonou para a vítima?\n";
	cin >> resp[1];
	
	
	
	cout << "Esteve no local do crime?\n";
	cin >> resp[2];
	
	cout << "Mora perto da vítima?\n";
	cin >> resp[3];
	
	cout << "Devia para a vímima?\n";
	cin >> resp[4];
	
	cout << "Já trabalhou com a vítima?\n";
	cin >> resp[5];
	
	int cont = 0;
	
	for (int x = 1; x<6; x++){
		if (resp[x] == "sim" or resp[x] == "Sim"){
			cont ++;
		}
	}
	
	if (cont >= 2){
		
		cout << "Você é considerado suspeito";
		
	}else {
		cout << "Você não é considerado suspeito, está liberado";
	}
}
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	
	for (int x=0; x<61; x++){
		cout << "-";
		Sleep(10);
	}
	cout << endl;
	cout << "-                         Bem vindo !                        -\n";
	cout << "-       Temos algumas perguntas para você sobre um crime     -\n";
	cout << "-  Será bem rápido, e estando tudo certo você sera liberado  -\n";
	cout << "-              Respoda apenas com 'sim' ou  'nao'            -\n";
	system("pause");
	system("cls");
	
	
	
suspeito ();
	

		
		

	
	
	
	
	
	system("pause");
}
