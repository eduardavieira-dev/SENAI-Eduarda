#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	int a, b, c, soma ;


cout<<"Digite o primeiro valor: ";
cin>> (a);

cout<<"Digite o segundo valor: ";
cin>>(b);

cout<<"Digite o terceiro valor: ";
cin>>(c);

soma= a+b;
	
	if (soma<c) {
			
	cout<< "A soma de "<< a<< " + "<< b<< " é menor que "<< c<<endl;

} else  {
	cout<< "A soma de "<< a<< " + "<< b<< " é maior que "<< c<<endl;

} 
	
	return 0;
}
