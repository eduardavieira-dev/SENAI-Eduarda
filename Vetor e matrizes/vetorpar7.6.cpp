#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");



int A[10];
int par;

par=0;

for(int x = 0; x < 10; x++){
	cout<<"Digite um n�mero: ";
    cin>>A[x];
      if (A[x]%2==0) {
   par++;
   
}
}

 
   cout<<"A quantidade de n�meros pares �:"<<par;

	system("pause");
}
