
#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int n, par, impar, maior, num;
	par=0;
	impar=0;
	maior=0;
	
//para x de 0 até 10 faca
	for(int x=0; x < 20; x++){ // x =x+1
	cout<< "Digite um número: ";
	cin>> num;
	
	if(num%2==0){
		par++;}
	else	{
		
	impar++;
	}
	if (num>10){
		maior++;
	}
	
}

cout<< "A quantidade de números pares é "<<par<<endl;
cout<< "A quantidade de números maiores que 10 são "<<maior<<endl;
cout<< "A quantidade de números impares é "<<impar<<endl;	
	system("pause");
}
