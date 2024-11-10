#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	
	
int	planeta;
float peso,  calc ;
 
cout<<"Digite seu peso: ";
cin>>peso;
cout<<"Informe o número do planeta que deseja calcular seu peso: ";
cout<<"1- Mercurio";
cout<<"2- Vênus";
cout<<"3- Marte";
cout<<"4- Júpter";
cout<<"5- Saturno";
cout<<"6- Urano\n";
cin>>planeta;
switch (planeta){
case 1:
calc= (peso/10)*0.37;

case 2:
calc= (peso/10)*0.88;

case 3:
calc= (peso/10)*0.38;

case 4:
calc= (peso/10)*2.64;

case 5:
calc= (peso/10)*1.15;

case 6:
calc= (peso/10)*1.17;

}

cout<<"Seu peso é "<< calc;

	return 0;
}
