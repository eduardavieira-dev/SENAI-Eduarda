#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(int argc, char* argv[]) {
setlocale(LC_ALL, "portuguese");
int m;
string calc;

cout<<"Digite o n�mero do m�s para saber a esta��o: \n";
cout<<"1- Janeiro\n";
cout<<"2- Fevereiro\n";
cout<<"3- Mar�o\n";
cout<<"4- Abril\n";
cout<<"5- Maio\n";
cout<<"6- Junho\n";
cout<<"7- Julho\n";
cout<<"8- Agosto\n";
cout<<"9- Setembro\n";
cout<<"10- Outubro\n";
cout<<"11- Novembro\n";
cout<<"12- Dezembro\n";
cin>>m;

switch (m){

case 1 :
calc="Ver�o";
break;
case 2:
calc="Ver�o";
break;
case 3:
calc="Ver�o";
break;

case 4:
calc="Outono";
break;
case 5:
calc="Outono";
break;
case 6:
calc="Outono";
break;

case 7:
calc="Inverno";
break;
case 8:
calc="Inverno";
break;
case 9:
calc="Inverno";
break;

case 10 :
calc="Primavera";
break;
case 11 :
calc="Primavera";
break;
case 12 :
calc="Primavera";
break;

default:
cout<<"N�mero inv�lido!";
break;
}

cout<<"A esta��o referente ao m�s "<<m<<" � "<< calc<<endl;


system("pause");
}
