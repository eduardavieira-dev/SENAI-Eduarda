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
		cout << "Digite um n�mero (" << x << ") :";
		cin >> num[x];
		if (num[x] > maior){
			maior = num[x];
			linha = x;
		}
		system("cls");
	}
	
	cout << "\n--------------------------------------\n";
	cout << "-    Os n�meros digitados foram :    -\n";
	cout <<"         ";
	
	for (int x=0; x<10; x++){
		
		cout << num[x] << " ";
	}
	cout << "\n--------------------------------------";
	
	cout << "\n-    O maior n�mero digitado foi : " << maior;
	
	cout << "\n--------------------------------------\n";
	
	cout << "- A sua posi��o � : " << linha;
	
	cout << "\n--------------------------------------\n";
	
	system("pause");
}
