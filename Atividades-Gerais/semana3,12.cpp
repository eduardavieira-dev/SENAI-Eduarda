#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
int n ;


cout<<"Digite um n�mero para saber o dia da semana correspondente:(entre 1 a 7)\n ";
cin>>(n);
if (n==1){
cout<<"Domingo";
}else if (n==2) {
cout<<"Segunda-feira";}
else if (n==3) {
cout<<"Ter�a-feira";}
else if (n==4) {
cout<<"Quarta-feira";}
else if (n==5) {
cout<<"Quinta-feira";}
else if (n==6) {
cout<<"Sexta-feira";}
else if (n==7) {
cout<<"S�bado";
} else if (n<1) {
cout<<"N�o consta";;
} else {
cout<<"N�o consta";;
}
	
	return 0;
}
