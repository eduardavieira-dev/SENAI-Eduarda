#include <iostream>
using namespace std;

void lerCadaLetra(const string& palavra) {
    for (char letra : palavra) {
      if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
	  
     	cout<<letra<<" :";
      cout<<"vogal \n";
      
    }else{
    	cout<<letra<<" :";
    	cout<<"consoante \n";
	}
}
}
int main() {
	
string texto;
cout<<"escreva um texto: \n";
   cin>>texto;
    lerCadaLetra(texto);
    return 0;
    
    
}
