#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	
	float gerente,engenheiro,tecnico, auxiliar, ngerente, nengenheiro, ntecnico, nauxiliar ;
	string c, s, a;
	

	
	
gerente = 2000;
engenheiro = 1800;
tecnico = 1500;
auxiliar = 1000;
ngerente=(gerente*0.1)+gerente;
nengenheiro=(engenheiro*0.2)+engenheiro;
ntecnico=(tecnico*0.3)+tecnico;
nauxiliar=(auxiliar*0.4)+auxiliar;

cout<< "Informe a sua fun��o: ";
cin>> (c);	

	
	
	if (c == "gerente") {
			
	cout<< "Sal�rio antigo: "<<gerente<<endl;
	cout<< "Sal�rio atual: "<<ngerente<<endl;
	cout<< "A diferen�a �: "<<ngerente-gerente<<endl;

} else if(c== "engenheiro")  {
	cout<< "Sal�rio antigo: "<<engenheiro<<endl;
	cout<< "Sal�rio atual: "<<nengenheiro<<endl;
	cout<< "A diferen�a �: "<<nengenheiro-engenheiro<<endl;	

} else if (c=="tecnico")  {
	cout<< "Sal�rio antigo: "<<tecnico<<endl;
	cout<< "Sal�rio atual: "<<ntecnico<<endl;
	cout<< "A diferen�a �: "<<ntecnico-tecnico<<endl;
	
	
} else  {
	cout<< "Sal�rio antigo: "<<auxiliar<<endl;
	cout<< "Sal�rio atual: "<<nauxiliar<<endl;
	cout<< "A diferen�a �: "<<nauxiliar-auxiliar<<endl;

} 
	
	return 0;
}
