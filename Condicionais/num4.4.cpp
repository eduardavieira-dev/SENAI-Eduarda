#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int num, total;
		total=1;
	
	
	
	//para x de 0 at� 10 faca
	for(int x=0; x < 10; x++){ // x =x+1
	cout<< "Digite um n�mero:";
	cin>> num;
	total+=num;
	
		
	}
	//fimpara
	cout<< "A soma dos n�meros digitados �: "<<total<<endl;
	
	system("pause");
}
