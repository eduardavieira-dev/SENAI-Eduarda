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

if (result >= 50) {

	result += 10;
	cout << "O n�mero � maior que 50. \n";
	cout << "O resultado � " << result;

} else if (result >= 30 && result < 50) {
	result += 20; 
	cout << "O n�mero est� entre 30 e 50. \n";
	cout << "O resultado � " << result;

}else if (result > 0 && result <30) {
	result += 2;
	cout << "O n�mero est� entre 0 e 30. \n";
	cout << "O resultado � " << result;
	
} else{
	cout << "O n�mero � zero ou negativo. \n";
	cout << "O resultado � " << result;
}

	return 0;
}
