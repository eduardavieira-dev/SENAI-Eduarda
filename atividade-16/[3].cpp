#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;


void suspeito(){
	string resp[10];
	cout << "Telefonou para a v�tima?\n";
	cin >> resp[1];
	
	
	
	cout << "Esteve no local do crime?\n";
	cin >> resp[2];
	
	cout << "Mora perto da v�tima?\n";
	cin >> resp[3];
	
	cout << "Devia para a v�mima?\n";
	cin >> resp[4];
	
	cout << "J� trabalhou com a v�tima?\n";
	cin >> resp[5];
	
	int cont = 0;
	
	for (int x = 1; x<6; x++){
		if (resp[x] == "sim" or resp[x] == "Sim"){
			cont ++;
		}
	}
	
	if (cont >= 2){
		
		cout << "Voc� � considerado suspeito";
		
	}else {
		cout << "Voc� n�o � considerado suspeito, est� liberado";
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
	cout << "-       Temos algumas perguntas para voc� sobre um crime     -\n";
	cout << "-  Ser� bem r�pido, e estando tudo certo voc� sera liberado  -\n";
	cout << "-              Respoda apenas com 'sim' ou  'nao'            -\n";
	system("pause");
	system("cls");
	
	
	
suspeito ();
	

		
		

	
	
	
	
	
	system("pause");
}
