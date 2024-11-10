#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

   
   
   int num[4][4];
   
int calc;


for(int l = 0; l < 4; l++){// l linha
	for(int c = 0; c < 4; c++){ //c coluna

      
      cout<<"Digite um número para célula["<<l<<"]"<<"["<<c<<"]";
     cin>>num[l][c];
     
     if (num[l][c]> 10) {
     	calc++;
   
}
}
}
     
   cout<<"Os valores maiores que 10 são:"<<calc;

	system("pause");
}
