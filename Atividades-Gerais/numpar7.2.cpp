#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	const int tam=10;
	
	int num[tam];
	int num1[tam];
	
	for (int x= 0; x< tam; x++){  
		int num[x];
		cout << "Digite  um número inteiro e positivo: ";
		cin >> num[x];
	}
		
	for (int x= 0; x< tam; x++){  
	if (num[x]%2==0){
		num1[x]=num[x]/2;
	} else{
		num1[x]=num[x]*3;
	}	
}

cout<< "A sequencia digitada depois da operação foi: ";
	for (int x= 0; x< tam; x++){  
	int num1[x];
cout<<num1[x]<<endl;
}

cout<< "A sequencia digitada foi: ";
	for (int x= 0; x< tam; x++){  

cout<<num[x]<<endl;
}


	system("pause");
	//return 0;
}
