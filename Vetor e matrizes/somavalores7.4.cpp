#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

   
 
int x, y, soma;
int num[8];


for(int n =0; n<=8; n++)	{

  cout<<"Digite o n�mero("<<n<< "de 8): ";
   cin>>num[n];
}

cout<<"Digite o n�mero entre 1 e 8: ";
   cin>> x;

cout<<"Digite o n�mero entre 1 e 8: ";
   cin>> y;



for(int n = 0; n<= 8; n++)	{
   if (num[n]==x ){
   	 soma=num[n];
   }
  
  }

for(int n =0; n<=8; n++)	{
   if (num[n]==y){
   soma=soma+num[n];

}
}

cout<<"A soma dos valores � "<< soma;

	system("pause");
}
