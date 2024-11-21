#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	

float vf, vv ;

 
cout<<"Qual o valor de vendas fixado para você?";
cin>>(vf);
cout<<"Qual o valor total das suas vendas?";
cin>>(vv);


if (vv>=vf) {
cout<<"Você ganhou! \n";
}else{
cout<<"Você não ganhou! \n";
}




	system("pause");
	//return 0;
}
