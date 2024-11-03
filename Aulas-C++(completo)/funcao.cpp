#include <iostream>
#include <string>
#include <locale>


using namespace std;
//estruturar dados

	void teste(){

cout << "Teste de função";

}

int somar(int x, int y){//função com parametros

int result = x + y;
cout << result << endl;

}


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");

teste();

int t = 10;
int o = 8;

somar (t, o);
	system("pause");
}
