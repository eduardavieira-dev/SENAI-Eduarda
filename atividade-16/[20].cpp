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

int s;
float x,y,z;
void teste(){
	
 cout<<"escreva o numero (x)  : \n";
    cout<<"-> ";
    cin>>x;
   cout<<"escreva o numero (y)  : \n";
    cout<<"-> ";
    cin>>y;
      cout<<"escreva o numero (z)  : \n";
    cout<<"-> ";
    cin>>z;
	
	s=(x * x) + y + z;
	
	system("cls");
	
	  cout<<"seu resultado e : "<<s<<endl;
	
}



int main(int argc, char** argv) {
	
    setlocale(LC_ALL, "portuguese");
    
    
   
        teste();
        
        
        
 system("pause");   
}
