#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
int n, soma, cont ;
 double media;

soma=0;
cont=0;

do{ cout<<"Digite um n�mero: ";
cin>> n;
if(n%2==0){
soma= soma+n;	
cont++;	
	
}

}while (n!=0) ;
  if (cont>0 ) {
  	cont--;
  	
  	media = soma/cont;
  	

cout<<"A m�dia dos n�meros pares �: "<< media<< endl;
}else {
cout<<"Nenhum n�mero par foio digitado\n";
  }

	system("pause");
}
