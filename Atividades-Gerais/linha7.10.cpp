#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");
    
    int num[5][5];
    int cont, cont1;
    
    cont = 1;
	cont1 = 1;

for (int linha = 0; linha < 5; linha ++){
    for (int coluna = 0; coluna < 5; coluna ++){
     	
     	if (linha == coluna){
    	 num[linha][coluna] = 1;
	    }else {
  		 num[linha][coluna] = 0;
  	    }
	}
}

for (int linha = 0; linha < 5; linha ++){
	
    for (int coluna = 0; coluna < 5; coluna ++){
     	cout << num[linha][coluna];
	}
	cout << "\n";
}
    
    system("pause");
}
