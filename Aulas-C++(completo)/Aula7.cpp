#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

  setlocale(LC_ALL,"portuguese"); 
  
  int mes;
  string est;
  
cout <<"Janeiro  (1): Verão-||Setembro (9): Inverno \n";
cout <<"Fevereiro (2):Verão  || Outubro (10): Primavera \n";
cout << "Março (3): Verão    ||Novembro (11): Primavera \n";
cout << "Abril (4): Outono   ||Dezembro (12): Primavera \n";
cout << "Maio  (5): Outono   || \n";
cout << "Junho (6): Outono   || \n";
cout << "Julho (7): Inverno  || \n";
cout <<"Agosto (8): Inverno  || \n";
   
   cout << "Qual mês deseja saber a estação? \n";
   cin >> mes;

    switch (mes) {
	

      case 1:
      	
       est = "Janeiro é verão";
       break;
       
      case  2:
      	
         est = "Fevereiro é verão";
         break;
      case  3:
      	
              est = "Março é verão";
              break;
      case  4:
      	
                       est = "est <- Abril é outono";
               break;          
      case  5:
      	
           est = "est <- Maio é outono";
               break;       
      case  6:
      	
              est = "Junho é outono";
              break;
      case  7:
      	
            est = "Julho é inverno";
            break;
      case  8:
      	
      est = "Agosto é inverno";
      break;
      case  9:
      	
           est = "Setembro é Inverno";
           break;
      case  10:
      	
             est =  "Outubro é Primavera";
             break;
      case  11:
      	
                 est = "Novembro é Primavera";
                 break;
      case  12:
                   est = "Dezembro é Primavera";
                   break;
  }
      
     cout << "A estação do ano correspondente ao mês:" << est << endl;
  
	system("pause");  
	//return 0;
}