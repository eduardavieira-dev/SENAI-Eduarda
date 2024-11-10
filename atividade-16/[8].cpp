#include <iostream>
#include <locale>

using namespace std;
int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    const int rows = 4;
    const int cols = 4;
    int matrix[rows][cols];

    // Leitura da matriz
    cout << "Digite os elementos da matriz 4x4:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
        	cout << "Informe [" << i << "] [" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    system("cls");

    // Impressão da matriz
    cout << "Matriz \n\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    // Encontrar o maior valor e sua localização
    int max_value = matrix[0][0];
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // Impressão da localização do maior valor
    cout << endl << "O maior valor é " << max_value << " e está na linha " << max_row + 1 << " e coluna " << max_col + 1 << ".\n";

    return 0;
}

