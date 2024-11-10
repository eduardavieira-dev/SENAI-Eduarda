#include <iostream>
#include <locale>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int num[7];
	int total_par = 0;
	int total_impar = 0;
	
	for (int x = 1; x < 7; x++) {
		cout << " ___________________________" << endl;
		cout << "|_________ SISTEMA _________|" << endl;
		cout << "| Informe o um número       |" << endl;
		cout << "| ";
		cin >> num[x];
		
		if (num[x]%2 == 0) {
			total_par = num[x]+total_par; 
		} else {
			total_impar++; 
		}
	}
	
	system("cls");
	
		cout << " ___________________________" << endl;
		cout << "|___________PARES___________|" << endl;
		cout << "|                           |" << endl;
		for (int x = 1; x < 7; x++) {
			if (num[x]%2 == 0) {
				cout << "| "  << num[x] << endl; 
			} 
		}
		cout << "| Total: " << total_par << endl;
		cout << "|___________________________|" << endl;
	
		cout << " ___________________________" << endl;
		cout << "|__________IMPARES__________|" << endl;
		cout << "|                           |" << endl;
		for (int x = 1; x < 7; x++) {
			if (num[x]%2 != 0) {
				cout << "| " << num[x] << endl; 
			} 
		}
		cout << "| Digitados: " << total_impar << endl;
		cout << "|___________________________|" << endl;
	
	system("pause");
}
