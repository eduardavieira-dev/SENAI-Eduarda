#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int num, total, mi;
	float media;
		total=1;
	
	
	
	//para x de 0 até 10 faca
	for(int x=0; x < 20; x++){ // x =x+1
	cout<< "Digite uma idade:";
	cin>> num;
	if(num>=18){
		mi++;
	}
	total+=num;
	
		
	}
	
	media=total/20;
	//fimpara2
		cout<<"A soma das idades é: "<<total<<endl;
		cout<<"A média das idades é: "<<media<<endl;
		cout<<"Os maiores de idade são: "<<mi<<endl;
		
	system("pause");
}
