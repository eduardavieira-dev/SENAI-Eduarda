#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	double jorge, roberto, ajorge, aroberto ;
	int anos;

jorge= 1.72;
 roberto=1.65;
  ajorge=0.03;
   aroberto=0.04;
   
while(roberto<jorge){
jorge=jorge+ajorge	;
 roberto= roberto+ aroberto	;
anos++;	
}


cout<<"Demorará: "<<anos<< " anos para roberto passar jorge\n";

   
	
system("pause");
}
