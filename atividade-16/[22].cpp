#include <iostream>
#include <vector>

using namespace std;
int main() {
    int matrizA[5][5];
    int somaLinhas[5] = {0};
    int somaColunas[5] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
        	    cout << "Digite o valor [ " << i << " ] [ " << j << " ]" << endl;
            cin >> matrizA[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            somaLinhas[i] += matrizA[i][j];
            somaColunas[j] += matrizA[i][j];
        }
    }
    
    system("cls");

    cout << "Matriz" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "soma das linhas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << somaLinhas[i] << " ";
    }
    cout << endl;

    cout << "soma das colunas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << somaColunas[i] << " ";
    }
    cout << endl;

    return 0;
}
