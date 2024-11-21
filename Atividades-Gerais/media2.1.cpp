#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, media;
	string nome;
	
	cout<< "Informe seu nome: ";
	cin>> (nome);
	
	cout<< "Informe sua primera nota: ";
	cin>> (n1);
	
	cout<< "Informe sua segunda nota: ";
	cin>> (n2);
	
	cout<< "Informe sua terceira nota: ";
	cin>> (n3);
	
	media = (n1+n2+n3)/3;
	
	if (media >= 7) {

	cout << "O aluno foi aprovado \n";
	cout << "Sua média é " << media;

} else if (media <= 5) {
	cout << "O aluno foi reprovado \n";
	cout << "Sua média é " << media;

}else if (media >= 5 && media <=6.9) {

	cout << "O aluno está de recuperação. \n";
	cout << "Sua média é  " << media ;
	
} 
	
	return 0;
}
