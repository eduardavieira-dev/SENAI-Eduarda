#include <iostream>
#include <string>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
   
setlocale(LC_ALL, "portuguese");

int n1, n2, n3, result;

cout << "Digite um n�mero: ";
cin >> n1; 

cout << "Digite outro n�mero: ";
cin >> n2; 

cout <<"Digite o �ltimo n�mero: ";
cin >> n3;

result = n1 + n2 + n3; 

if (result > 50) {

	result += 10;
	cout << "O resultado � " << result;

} else {
	result += 20; 
	cout << "O resultado � " << result;
}

	return 0;
}
