#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
int n, cont, x;

cout<<"Digite um n�mero: ";
cin>> n;

cont=0;

for(x=1; x<=n; x++){
	if(n%x==0){
		cont++;
	}
}
if (cont==2){
cout<<n<<" � um n�mero primo.";
} else{
cout<<n<<" n�o � um n�mero primo.";
}




	return 0;
}
