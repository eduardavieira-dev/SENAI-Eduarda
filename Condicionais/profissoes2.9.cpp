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

cout<< "Informe a sua função: ";
cin>> (c);	

	
	
	if (c == "gerente") {
			
	cout<< "Salário antigo: "<<gerente<<endl;
	cout<< "Salário atual: "<<ngerente<<endl;
	cout<< "A diferença é: "<<ngerente-gerente<<endl;

} else if(c== "engenheiro")  {
	cout<< "Salário antigo: "<<engenheiro<<endl;
	cout<< "Salário atual: "<<nengenheiro<<endl;
	cout<< "A diferença é: "<<nengenheiro-engenheiro<<endl;	

} else if (c=="tecnico")  {
	cout<< "Salário antigo: "<<tecnico<<endl;
	cout<< "Salário atual: "<<ntecnico<<endl;
	cout<< "A diferença é: "<<ntecnico-tecnico<<endl;
	
	
} else  {
	cout<< "Salário antigo: "<<auxiliar<<endl;
	cout<< "Salário atual: "<<nauxiliar<<endl;
	cout<< "A diferença é: "<<nauxiliar-auxiliar<<endl;

} 
	
	return 0;
}
