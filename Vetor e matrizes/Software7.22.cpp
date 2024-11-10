#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

using namespace std;
int main(int argc, char** argv) {

	setlocale(LC_ALL, "portuguese");
	
	string co[6];
	string li[6];
	
	for(int x=0; x < 6; x++){
		cout<< "Informe o Hardware: ";
		cin>> co[x];	
	}
	
	for(int y=0; y < 6; y++){
		cout<< "Informe o Software: ";
		cin>> li[y];	
	}
	
	system("cls");
	cout << "HARD | SOFT";
	for(int x=0; x < 6; x++){
	cout<<endl;
	cout<< co[x] << " ";
	cout << li[x];
	}
	
	cout << endl;
	
	system("pause");
}
