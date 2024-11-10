#include <iostream>
#include <windows.h>
#include <locale>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int num[4][4];
    int calc, i;

	
	
			for (int x= 0; x < 5; x++) {
		for (int y= 0; y < 5; y++) {
			cout << "Digite um número \n";
			cin >> num[y][x];
			
		}
		system("cls");
	}
	cout << "Digite um número para saber sua localização : ";
    cin >> i;
    
    			for (int x= 0; x < 5; x++) {
		for (int y= 0; y < 5; y++) {
			
			if (i == num[x][y]){
				cout << "O número digitado está localizado na linha : " << x << ", coluna" << y << endl;
				break;
			} else{
				if (x == 4 and y == 4){
				cout << "Número não encontrado";
			}
			}
		}
	}
	
	
	
	system("pause");
}
