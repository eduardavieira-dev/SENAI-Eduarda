#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	double s, a;
int cargo;

cout<<"Digite o n�mero correspondente a sua profiss�o:\n";
cout<<"1-Secret�rio\n";
cout<<"2-Professor\n";
cout<<"3-Tesoureiro\n";
cout<<"4-Coordenador\n";
cout<<"5-Diretor\n";
cin>>(cargo);

cout<<"Digite seu atual sal�rio: ";
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
cout << "Op��o inv�lida!";
break;
}
}

cout<<"Seu atual sal�rio � de "<< a <<" reais.";
	
	
system("pause");
}
