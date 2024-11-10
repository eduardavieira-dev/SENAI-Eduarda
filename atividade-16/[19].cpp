#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <cstring> 
#include <conio.h> 

using namespace std;


int num1;
void teste(){
	
	if (num1<0){
		
	
		   cout<<"seu numero e negativo: "<<num1<<endl;
		   
	}else{
		
	
	
		   cout<<"seu numero e positivo : "<<num1<<endl;
	}
	
}



int main(int argc, char** argv) {
	
    setlocale(LC_ALL, "portuguese");
    
    
    cout<<"escreva um numero : \n";
    cout<<"-> ";
    cin>>num1;
 
        teste();
        
        
        
 system("pause");   
}
