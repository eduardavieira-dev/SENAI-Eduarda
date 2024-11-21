#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
string nome[10];
string nome1;
  int x;
for(int x =0; x<=10; x++)	{
	
 		cout << "Digite um nome: ";
		cin >> nome[x];
	 }


cout<<"Digite o nome de qualquer pessoa: ";
   cin>>nome1;

  for(int x =0; x<=10; x++)	{
  nome1=nome[x];}
  
  for(int x =0; x<=10; x++)	{	
  if(nome[x]==nome1) {
  	
   cout<<"ACHEI!";
   break;
   }
   else{
   	 cout<<"NÃO ACHEI!";
   }
}
   
	system("pause");
}
