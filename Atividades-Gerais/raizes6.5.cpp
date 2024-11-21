#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	int c;
	float n, calc;

cout<<"Digite um número do calculo que deseja fazer: \n";
cout<<"101- Raiz quadrada\n";
cout<<"102- A metade\n";
cout<<"103- 10% do número\n";
cout<<"104- O dobro\n";
cin>>(c);

cout<<"Digite um número: ";
cin>>n;

switch (c){

case 101:
calc=n*n;
break;

case 102:
calc= n/2;
break;

case 103:
calc= n*0.1;
break;

case 104:
calc=n*2;

break;

default:
cout << "Opção inválida!";
break;
}

cout<<"O resultado é "<< calc<<endl;

	
system("pause");
}
