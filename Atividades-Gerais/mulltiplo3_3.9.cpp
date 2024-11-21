#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	




int n ;
 
cout<<"Digite um número: ";
cin>>(n);


if(n%3 == 0 ) {
cout<<"Este número é multiplo de 3"; 
} else {

cout<<"Este número não é multiplo de 3" ;

} 
	
	return 0;
}
