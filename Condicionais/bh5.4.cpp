#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");


int x, nmora, mora ;
string n, cn, BH;
nmora=0;
mora=0;

for(x=1;  x<= 20 ;x++) {
cout<<"Digite o"<< x<< "º nome: ";
cin>>n;
cout<<"Digite a cidade natal: ";
cin>>cn;

if (cn=="BH") {
mora++;
} else{ 
nmora++;
}

}

cout<<"Moram em BH: "<< mora<<endl;
cout<<"Não moram em BH: "<< nmora<<endl;

	
	system("pause");
}
