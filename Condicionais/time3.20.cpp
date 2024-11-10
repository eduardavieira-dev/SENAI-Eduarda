#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
char t1, t2;
int g1, g2 ;

cout<<"Informe o nome do primeiro time: ";
cin>>t1;
cout<<"Informe o nome do segundo time: ";
cin>>t2;
cout<<"Quantos gols o " <<t1<< " fez: ";
cin>>g1;
cout<<"Quantos gols o " << t2 <<" fez: ";
cin>> g2;
if (g1>g2){
cout<<t1," é o time vencedor!";}
else if (g1<g2) {
	cout<<t2<<" é o time vencedor!";
} else if (g1=g2) {
cout<<"EMPATE";
}



	return 0;
}
