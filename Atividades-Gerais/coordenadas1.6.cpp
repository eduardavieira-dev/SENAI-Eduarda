#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float xA, yA, xB, yB, distancia ;



 cout<< "Digite as coordenadas do ponto A (xA, yA): ";
 cin>>(xA, yA);
 cout<< "Digite as coordenadas do ponto B (xA, yA): ";
 cin>>(yB, yB);

 distancia =
 ((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));

 cout<<"A distancia entre os pontos A e B é: "<<distancia;


	
	
	return 0;
}
