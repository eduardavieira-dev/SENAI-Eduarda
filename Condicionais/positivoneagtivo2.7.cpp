#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	int n1, calc ;
	string nome;
	
	cout<< "Informe um número: ";
	cin>> (n1);
	
	
	

	
	
	if (n1 >0) {
		
	if (n1%2==0) {	
	cout<< "Este número é par e positivo";



} else  {
		cout << "Este número é impar e positivo";
		

}} else if (n1<0)  {
	calc= n1*(-1);
	if (n1%2==0) {	
		cout << "Este número é par e negativo";
		
} else  {
		cout << "Este número é impar e negativo";
				

} 
	
	return 0;
}}
