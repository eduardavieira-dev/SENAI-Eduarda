#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	

float vf, vv ;

 
cout<<"Qual o valor de vendas fixado para voc�?";
cin>>(vf);
cout<<"Qual o valor total das suas vendas?";
cin>>(vv);


if (vv>=vf) {
cout<<"Voc� ganhou! \n";
}else{
cout<<"Voc� n�o ganhou! \n";
}




	system("pause");
	//return 0;
}
