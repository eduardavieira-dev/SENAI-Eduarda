#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
   int	p, m, g, x, x1, x2, soma ;



cout<< "Quantas camisetas pequenas foram vendidas?";
cin>> (x);
cout<< "Quantas camisetas médias foram vendidas?";
cin>> (x1);
cout<< "Quantas camisetas grandes foram vendidas?";
cin>> (x2);
p = 10*x;
m = 12*x1;
g = 15*x2;
soma= (p+m+g);
cout<< "O valor arrecadado foi de " <<soma<< " reais";
	
	
	return 0;
}
