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
			cout << "Digite um n�mero \n";
			cin >> num[y][x];
			
		}
		system("cls");
	}
	cout << "Digite um n�mero para saber sua localiza��o : ";
    cin >> i;
    
    			for (int x= 0; x < 5; x++) {
		for (int y= 0; y < 5; y++) {
			
			if (i == num[x][y]){
				cout << "O n�mero digitado est� localizado na linha : " << x << ", coluna" << y << endl;
				break;
			} else{
				if (x == 4 and y == 4){
				cout << "N�mero n�o encontrado";
			}
			}
		}
	}
	
	
	
	system("pause");
}
