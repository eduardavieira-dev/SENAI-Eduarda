#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	

char letra;

cout<<"Escreva uma letra: ";  //Insira apenas uma letra
cin>>(letra);
if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
cout<<"Essa letra é uma vogal ";}
else {
cout<<"Essa letra é uma consoante ";
}


	system("pause");
	//return 0;
}
