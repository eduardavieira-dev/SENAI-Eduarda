#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	
	
	
float peso, altura, imc ;

 
cout<<"Insira seu peso:";
cin>>(peso);
cout<<"Insira sua altura:";
cin>>(altura);
imc = peso/(altura*altura);



	if(imc<18.5) {

cout<<"Voc� est� abaixo do seu peso ideal"<<endl;

} else if (imc>=18.5 && imc<=25) {

	cout<<"Voc� est� no seu peso ideal" <<endl;

} else if (imc>25 && imc<=30) {

	cout<<"Voc� est� acima do peso" <<endl;

} else { cout<<"Voc� est� obeso";
}
	
	return 0;
}
