#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int numeros[4][4]={ //colunas
						{12, 8, 5, 11}, //linhas
						{ 9, 10, 2, 20},
						{10, 6, 16, 4},
						{28, 19, 3, 7}

	};
					
cout<< numeros[2][3]<<endl;
	
	system("pause");
	
	//return 0;
}
