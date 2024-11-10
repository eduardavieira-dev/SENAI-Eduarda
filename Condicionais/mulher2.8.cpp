#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float altura, p1, p2 ;
	string sexo;
	
	cout<< "Informe se você é Homem ou Mulher: ";
	cin>> (sexo);
	

	cout<< "Informe a sua altura em metros: ";
	cin>> (altura);	
	
	if (sexo=="Mulher") {
		p1= 62.1* altura -44.7	;
	cout<< "Seu peso ideal é "<<p1;


} else  {
	p2= 72.7* altura -58;	
		cout<< "Seu peso ideal é "<<p1;
		

} 
	
	return 0;
}
