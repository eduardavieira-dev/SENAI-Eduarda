#include <iostream>
#include <windows.h>
#include <locale>
#include <vector>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	int mult[4][4], mat1[4][4], matriz[4][4];
	
	for (int x = 0;x < 4;x++){
		for (int y = 0;y < 4;y++){
	
	cout << "Digite o numero da posição dessa primeira matriz \n";	
	cin >> matriz[x][y];
	system("cls");
}
}
	
	
	for (int x = 0;x < 4;x++){
		for (int y = 0;y < 4;y++){
	
	cout << "Digite o numero dessa posição \n";	
	cin >> mat1[x][y];
		system("cls");
}
	}
	
	for (int x = 0;x < 4;x++){
		for (int y = 0;y < 4;y++){
	
	mult[x][y] = matriz[x][y] * mat1[x][y];
}
	}
	
	for (int x = 0;x < 4;x++){
		for (int y = 0;y < 4;y++){
	
	cout << mult[x][y];
}
cout << endl;
}
			
	system("pause");
	//return 0;
}
