#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	string ani_ve[9];
	string ani;
	
	for (int x= 0; x < 9; x++) {
		cout << "Escreva o nome de um animal: ";
		cin >> ani;	
	
		for (int y= 0; y < 9; y++) {
			if (ani_ve[y] == ani) {
				ani = "";
			}
		}
		
		ani_ve[x] = ani;
	}
	
	system("cls");
	cout << "Tabela de animais";
	cout << endl;
	
	for (int x= 0; x < 9; x++) {
		cout << ani_ve[x] << endl;	
	}
	
	system("pause");
}
