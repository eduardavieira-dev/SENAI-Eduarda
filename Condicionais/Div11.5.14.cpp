#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

int x;
cout<<"A quantidade de números que são divisiveis por 11 e sobram 5 foram estes\n";
for(x=1000;  x<= 1999 ;x++) {

if(x%11 == 5){
	cout<<x<<endl;
}

}
   
	
system("pause");
}
