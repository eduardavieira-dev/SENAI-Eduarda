#include <iostream>
#include <string>

using namespace std; 	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int num;//Vari�vel tipo inteiro
float valor;//Vari�vel tipo real
double preco;//Vari�vel tipo real (mais casas decimais) 
string nome;//Vari�vel tipo caracteres (palavras, textos)
char letra;//Vari�vel tipo somente um caracter
bool check;//Vari�vel tipo booleano - True or False

num = 19; 
valor = 2.3466346343;
preco = 4.234342542523523;
nome = "Wells";
letra = 'a';
check = false;

cout << "N�mero: " << num << endl << endl;
cout << "Valor: " << valor << endl << endl;
cout << "Pre�o: " << preco << endl << endl;
cout << "Letra: " << letra << endl << endl;
cout << "Nome: " << nome << endl << endl;
cout << "Booleano: " << check << endl << endl;,

	return 0;
}
