#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	




int n ;
 
cout<<"Digite um n�mero: ";
cin>>(n);


if(n%3 == 0 ) {
cout<<"Este n�mero � multiplo de 3"; 
} else {

cout<<"Este n�mero n�o � multiplo de 3" ;

} 
	
	return 0;
}
