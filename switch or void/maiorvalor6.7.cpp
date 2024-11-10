#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int main(int argc, char* argv[]) {
setlocale(LC_ALL, "portuguese");

int valor1, valor2, valor3, maior, menor, meio, n;
n=0;


  cout<<"Digite o primeiro valor: ";
  cin>>(valor1);

   cout<<"Digite o segundo valor: ";
   cin>>(valor2);

  cout<<"Digite o terceiro valor: ";
   cin>>(valor3);

   cout<<"escolha como você quer os números : \n";
cout<<"1 : valores em ordem crescente\n";
cout<<"2 : valores em ordem decrescente\n";
cout<<"3 : organizado de forma que o maior valor fique\n";
cout<<"entre os outros dois:\n";

 cin>> (n);


   // Maior valor
   
   
   if ('valor1' > 'valor2' && 'valor1' > 'valor3') {
   maior = valor1;
   } else if('valor2' > 'valor1' && 'valor2' > 'valor3') {
      maior =valor2;
 }else if ('valor2'  > 'valor3' && 'valor3' > 'valor1') {
      maior = valor2;
 } else{ maior = valor3;
 }
     

   // Menor valor
   if('valor1' < 'valor2' && 'valor1' < 'valor3'){
      menor = valor1;} else if ('valor2' < 'valor1' && 'valor2' < 'valor3') { menor = valor2;
 }else{ menor = valor3;
 }
     
   

   // Valor do meio
   meio = valor1+valor2+valor3-maior-menor;

  switch (n){
  case 1:
   cout<<"Valores em ordem crescente: "<< menor<< ", "<< meio<< ", "<< maior;
    break;
   case 2:
   cout<<"Valores em ordem decrescente: "<< maior<< ", "<< meio<< ", "<< menor;
   break;
    case 3:
   cout<<"Valor do meio maior: "<< meio<< ", "<< maior<<", "<< menor;
 break;
    default:
    cout<<"Código inválido";
  }
system("pause");
}
