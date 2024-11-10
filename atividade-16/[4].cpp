#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {

	setlocale(LC_ALL, "portuguese");
	
	int num[10];
	int maior = 0;
	int linha;
	
	for (int x=0; x<10; x++){
		cout << "Digite um número (" << x << ") :";
		cin >> num[x];
		if (num[x] > maior){
			maior = num[x];
			linha = x;
		}
		system("cls");
	}
	
	cout << "\n--------------------------------------\n";
	cout << "-    Os números digitados foram :    -\n";
	cout <<"         ";
	
	for (int x=0; x<10; x++){
		
		cout << num[x] << " ";
	}
	cout << "\n--------------------------------------";
	
	cout << "\n-    O maior número digitado foi : " << maior;
	
	cout << "\n--------------------------------------\n";
	
	cout << "- A sua posição é : " << linha;
	
	cout << "\n--------------------------------------\n";
	
	system("pause");
}
