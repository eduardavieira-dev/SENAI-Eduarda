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
	
	
	
	//para x de 0 at� 10 faca
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
		cout<<"A soma das idades �: "<<total<<endl;
		cout<<"A m�dia das idades �: "<<media<<endl;
		cout<<"Os maiores de idade s�o: "<<mi<<endl;
		
	system("pause");
}
