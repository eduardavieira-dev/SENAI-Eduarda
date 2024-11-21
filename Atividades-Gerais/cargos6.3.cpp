#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	double s, a;
int cargo;

cout<<"Digite o número correspondente a sua profissão:\n";
cout<<"1-Secretário\n";
cout<<"2-Professor\n";
cout<<"3-Tesoureiro\n";
cout<<"4-Coordenador\n";
cout<<"5-Diretor\n";
cin>>(cargo);

cout<<"Digite seu atual salário: ";
cin>>s;

switch (cargo) {


case 1:
a=s+(s*0.45);
break;

case 2:
a=s+(s*0.35);
break;

case 3:
a=s+(s*0.25);
break;

case 4:
a=s+(s*0.15);
break;

case 5:
a=s;
break;

default:
cout << "Opção inválida!";
break;
}
}

cout<<"Seu atual salário é de "<< a <<" reais.";
	
	
system("pause");
}
