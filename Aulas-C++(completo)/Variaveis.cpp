#include <iostream>
#include <string>

using namespace std; 	
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int num;//Variável tipo inteiro
float valor;//Variável tipo real
double preco;//Variável tipo real (mais casas decimais) 
string nome;//Variável tipo caracteres (palavras, textos)
char letra;//Variável tipo somente um caracter
bool check;//Variável tipo booleano - True or False

num = 19; 
valor = 2.3466346343;
preco = 4.234342542523523;
nome = "Wells";
letra = 'a';
check = false;

cout << "Número: " << num << endl << endl;
cout << "Valor: " << valor << endl << endl;
cout << "Preço: " << preco << endl << endl;
cout << "Letra: " << letra << endl << endl;
cout << "Nome: " << nome << endl << endl;
cout << "Booleano: " << check << endl << endl;,

	return 0;
}
