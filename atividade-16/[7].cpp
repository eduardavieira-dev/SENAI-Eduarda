#include <iostream>
#include <locale>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int a[11];
	int b[11];
	int c[11];
	
	for (int x = 1; x < 11; x++) {
		cout << " ___________________________" << endl;
		cout << "|________Digite o A_________|" << endl;
		cout << "|";
		cin >> a[x];
		
		cout << " ___________________________" << endl;
		cout << "|________Digite o B_________|" << endl;
		cout << "|";
		cin >> b[x];
		
		c[x] = a[x]+b[x];
		system("cls");
	}

		cout << " ___________________________" << endl;
		cout << "|__________Valor C__________|" << endl;
		cout << "|                           |" << endl;
		for (int x = 1; x < 11; x++) {
			cout << "|" << c[x] << endl;
		}
				cout << "|___________________________|" << endl;
	
	system("pause");
}
