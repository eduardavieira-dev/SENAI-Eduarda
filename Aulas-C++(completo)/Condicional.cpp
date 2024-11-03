#include <iostream>
#include <string>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
   
setlocale(LC_ALL, "portuguese");

int n1, n2, n3, result;

cout << "Digite um número: ";
cin >> n1; 

cout << "Digite outro número: ";
cin >> n2; 

cout <<"Digite o último número: ";
cin >> n3;

result = n1 + n2 + n3; 

if (result > 50) {

	result += 10;
	cout << "O resultado é " << result;

} else {
	result += 20; 
	cout << "O resultado é " << result;
}

	return 0;
}
