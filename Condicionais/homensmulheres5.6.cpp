#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");




string s, n ;
double cm, cf, total, pm, pf, n1 ;

cm=0;
cf= 0;
n1= 1;



cout<<"Quando quiser finzalidar o programa digite '0'\n";

for(int x=0; x<5; x++) {

cout<<"Informe seu nome: ";
cin>>n;
cout<<"Informe seu sexo\n";
cout<<"Digite 'f' para feminino e 'm' para masculino: ";
cin>>s;
if(s=="m"){
cm++;
} else if(s=="f"){
cf++;
}else if(s=="0"){}
else{cout<<"Sexo inválido\n";
}
total++;


}


pm=(cm/total)*100;
pf=(cf/total)*100;

cout<<"A porcentagem de homens é igual a "<< pm <<"%\n";
cout<<"A porcentagem de mulheres é igual a "<< pf<< "%\n";


	
	system("pause");
}
