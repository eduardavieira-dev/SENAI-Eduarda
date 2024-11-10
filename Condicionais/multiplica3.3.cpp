#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	int a, b, c ;
	


cout<<"Digite o primeiro valor: ";
cin>> (a);
cout<<"Digite o segundo valor: ";
cin>>(b);


	if (b==a) {
c= a+b;
cout<<"O resultado da soma é de "<<c <<endl;

} else  {
	c= a*b;
	cout<<"O resultado da multiplicação é igual a "<< c <<endl;

} 
	
	return 0;
}
