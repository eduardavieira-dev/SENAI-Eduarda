#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int num[5]={2, 4, 12, 65, 7};
	cout<<num[4]<<endl;
	string nomes[4]= {"Julia", "Mateus", "Maria", "Jo�o"};
	cout<<nomes[3]<<endl;

	string frutas[]= {"ma�a", "abacate", "laranja","lim�o","tomate", "pera"};
	cout<< frutas[2]<<endl; 
	//cout<< frutas[rand()% 5 +1 ];
		system("pause");
	//return 0;
}
