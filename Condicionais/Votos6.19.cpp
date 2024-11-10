#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int cand,ron,nulo,mes,cr,branco;
nulo=0;
branco=0;
do{
cout<<"são candidados os senhores josivaldo, zaracho e edmundo\n";

cout<<"escolha em qual votar\n";
cout<<"1- barbie\n";
cout<<"2- Mary Jane\n";
cout<<"3- Homem Aranha\n";
cout<<"0- branco\n";
cout<<"4- nulo\n";
cout<<"digite -1 para finalizar\n";
cin>>cand;
if(cand == 1 ) {
cr = cr + 1;
}

if(  cand == 2){

mes = mes +  1;
}


if( cand == 3 ){
ron = ron + 1;
}

if (cand == 0){
branco = branco + 1 ;
}
if(cand == 4 ){

nulo = nulo + 1;
}


}while(cand != -1) ;


cout<<"barbie teve "<< cr<< " votos!\n";
cout<<"Mary Jane teve "<< mes<< " votos!\n";
cout<<"Homem Aranha teve "<< ron<< " votos!";
cout<<"infelizmente tivemos "<< branco<< " votos em branco\n";
cout<<"infelizmente tivemos "<< nulo<<" votos nulos\n\n";

if (cr > mes && cr > ron){

cout<<"barbie venceu a eleição!!!\n";
}
if(mes > cr && mes > ron){
cout<<"Mary Jane venceu a eleição!!!\n";
}

if(ron > cr && ron > mes) {

cout<<"Homem Aranha venceu a eleição!!!\n";

}



return 0;
}
