
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");
    
   
int opcao,a,b,sc,sl,sd,sip;
   int mt [4][4];


for( int a= 1;a<=4;a++){
	for( int b= 1;b<=4;b++){
		 int mt [4][4];
cout<<"Digite o valor da posição ["<<a<<","<<b<<"]: ";
cin>>mt[a][b];

}
}


do{
	
   
   cout<<"Escolha uma opção:\n";
   cout<<"1) mostrar dados da matriz \n";
   cout<<"2) Somar a primeira coluna \n";
   cout<<"3) Somar a terceira linha \n";
   cout<<"4) Somar a diagonal principal \n";
   cout<<"5) Somar o índice par da segunda linha \n";
   cout<<"6) Sair \n";
   cout<<"Opção: \n";
   cin>>opcao;
   
}while(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6);




switch (opcao){

 case 1:
      
cout<<"Matriz:";
for( int a= 1;a<=4;a++){
	for( int b= 1;b<=4;b++){
		 int mt [4][4];
cout<<mt[a][b]<<endl;
}
}
break;
            
      case 2:
       
sc = 0;;
for( int a= 1;a<=4;a++){
int mt [4][4];	
sc = sc+ mt[a][1];


} cout<<"A soma  da primeira coluna é: "<< sc<<endl; 
         break;   
        case  3:
         
sl = 0;
for( int b= 1;b<=4;b++){
	int mt [4][4];
sl = sl + mt[3][b];


}cout<<"A soma da terceira linha é: "<< sl<<endl;
         break;   
      case  4:
       
sd = 0;
for( int a= 1;a<=4;a++){
	int mt [4][4];
sd = sd + mt[a][a];


}cout<<"A soma da diagonal principal é: "<< sd<<endl;
          break;  
                 case 5:
       
sip = 0;
for( int b= 1;b<=4;b++){

	
if (mt[a][b] % 2 == 0 ){
	
sip = sip + mt[2][b];
}
}
cout<<"A soma do índice par da segunda linha é: "<< sip<<endl;

          break;  
   
        case  6:
        
cout<<"adeus ;0.";

break;

}
      
    
    
	return 0;
}
