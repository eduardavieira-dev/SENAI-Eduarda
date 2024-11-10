#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
int n, cont, x;

cout<<"Digite um número: ";
cin>> n;

cont=0;

for(x=1; x<=n; x++){
	if(n%x==0){
		cont++;
	}
}
if (cont==2){
cout<<n<<" é um número primo.";
} else{
cout<<n<<" não é um número primo.";
}




	return 0;
}
