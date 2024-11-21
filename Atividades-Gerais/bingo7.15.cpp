#include <iostream>
#include <windows.h>
#include <locale>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {

	int cart[5][5];
	int num;
	
	srand(time(0));
	
	for(int x= 0; x < 5; x++) {
		for(int y= 0; y < 5; y++) {
			num = rand() % 100;

			for(int a= 0; a < 5; a++) {
				for(int b= 0; b < 5; b++) {
					if (cart[a][b] == num) {
					num = rand() % 100;
					}
				}
			}
			cart[x][y] = num;
		}
	}
	
	system("cls");
	
	cout << "Cartela de BINGO!" << endl << endl;
	
	for(int x= 0; x < 5; x++) {
		for(int y= 0; y < 5; y++) {
			cout << cart[x][y] << " ";
		}
		cout << endl;
	}

	system("pause");
}
