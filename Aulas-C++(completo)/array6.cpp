#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int qtd_l, qtd_c;
	
	cout<< "Qual o tamanho da matriz que deseja armazenar os n�meros? \n";
	cout<<"Informe o n�mero de linhas da Matriz: ";
	cin>> qtd_l;
	cout<<"Informe o n�mero de colunas da Matriz: ";
	cin>> qtd_c;
	
	int numeros[qtd_l][qtd_c];
	
	for(int x=0; x < qtd_l; x++){
		for(int y=0; y < qtd_c; y++){
			cout<< "Informe o n�mero da c�lula [" <<x<<"]"<<"["<<y<< "]";
			cin>> numeros[x][y];	
		
	}
}

	for(int x=0; x < qtd_l; x++){ 
	cout<<endl;
		for(int y=0; y < qtd_c; y++){
		
			cout<< numeros[x][y];	
		
	}
}
	cout<<"\n";
	system("pause");
	//return 0;
}
