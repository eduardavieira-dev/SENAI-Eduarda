#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {

setlocale(LC_ALL, "portuguese");

double peso, pesop;
int planeta;
string planet;

cout << "Informe o seu peso: ";
cin >> peso;

cout << "| N |  Planeta  | Gravidade |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 |  Mercurio |   0,37    |" << endl;

cout << "| 2 |   Venus   |   0,88    |" << endl;

cout << "| 3 |   Marte   |   0,38    |" << endl;

cout << "| 4 |  Jupiter  |   2,64    |" << endl;

cout << "| 5 |  Saturno  |   1,15    |" << endl;

cout << "| 6 |   Urano   |   1,17    |" << endl;

cout << "" << endl;
cout << "Informe número do planeta que você deseja saber seu peso " << endl;
cin >> planeta;

switch (planeta) {

case 1:
pesop = (peso/10)*0.37;
planet = "Mercúrio";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

case 2:
pesop = (peso/10)*0.88;
planet = "Vênus";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

case 3:
pesop = (peso/10)*0.38;
planet = "Marte";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

case 4:
pesop = (peso/10)*2.64;
planet = "Júpiter";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

case 5:
pesop = (peso/10)*1.15;
planet = "Saturno";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

case 6:
pesop = (peso/10)*1.17;
planet = "Urano";

cout << "Seu peso no planeta " << planet << " é: " << pesop;
break;

default:
cout << "Opção inválida!";
break;
}

system("pause");
}
