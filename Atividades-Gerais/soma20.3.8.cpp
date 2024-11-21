#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	
 int soma, sub, n1,n2, result ;


cout<<"Insira o primerio valor: ";
cin>> (n1);
cout<<"Insira o segundo valor:";
cin>> (n2);
result=n1+n2;


if(result>20 ) {
soma= result+8;
cout<<"O resultado é "<< soma; 
} else {

sub= result-5;
cout<<"O resultado é "<< sub ;

} 
	
	return 0;
}
