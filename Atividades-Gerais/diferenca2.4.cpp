#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int n1, n2, diferenca1, diferenca2 ;
	string nome;
	
	cout<< "Informe um n�mero: ";
	cin>> (n1);
	
	cout<< "Informe outro n�mero: ";
	cin>> (n2);
	
	
	diferenca1 = n1-n2;
	diferenca2 = n2-n1;
	
	
	if (n1 >= n2) {

	cout << "A diferen�a entre esses n�meros � " << diferenca1;

} else  {
	cout << "A diferen�a entre esses n�meros � " << diferenca2;

} 
	
	return 0;
}
