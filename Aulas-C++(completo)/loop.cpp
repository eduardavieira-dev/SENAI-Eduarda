#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");


	int num, total;
	num=1;	
	total=0;
	//enquanto
	while(num!=0){//faca
	cout<< "Digite um n�mero: ";
	cin>> num;
	
	total += num;	//total<-total+1
	
	}//fimenquanto
	
	cout<< "A soma dos n�meros �:"<< total;
	
	//return 0;
	system("pause");
}
