#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
   
setlocale(LC_ALL, "portuguese");


int num1, num2, num3;
float total;
string nome;

cout << "Digite seu nome: "<< endl;
cout << "=> ";
// cin >> nome; ( somente uma palavra)
getline(cin, nome); // para nome e sobrenome
cout << endl;

cout << "Digite o primeiro número: "<< endl;
cout << "=> ";
cin >> num1;
cout << endl;

cout << "Digite o segundo número: "<< endl;
cout << "=> ";
cin >> num2;
cout << endl;

cout << "Digite o terceiro número: "<< endl;
cout << "=> ";
cin >> num3;
cout << endl;

total = (num2 + num3) / num1;

cout << "Querido amigo (a) " << nome << " o resultado é " << total << endl << endl;

cout << "O seu nome é: " << nome;

return 0;

}
