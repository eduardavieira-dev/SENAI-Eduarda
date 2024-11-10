#include <iostream>
#include <locale.h>

using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_COLUNAS = 4;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[NUM_ALUNOS][NUM_COLUNAS];

    // Leitura das informa��es e c�lculo das notas finais
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ":" << endl;

        cout << "N�mero de Matr�cula: ";
        cin >> matriz[i][0];

        cout << "M�dia das Provas: ";
        cin >> matriz[i][1];

        cout << "M�dia dos Trabalhos: ";
        cin >> matriz[i][2];

        // C�lculo da nota final
        matriz[i][3] = matriz[i][1] + matriz[i][2];
    }

    // Encontrar aluno com maior nota final
    int maiorNotaFinal = matriz[0][3];
    int indiceMaiorNota = 0;

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (matriz[i][3] > maiorNotaFinal) {
            maiorNotaFinal = matriz[i][3];
            indiceMaiorNota = i;
        }
    }

    // Imprimir matr�cula do aluno com maior nota final
    cout << "Matr�cula do aluno com maior nota final: " << matriz[indiceMaiorNota][0] << endl;

    // Calcular e imprimir m�dia aritm�tica das notas finais
    int somaNotasFinais = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        somaNotasFinais += matriz[i][3];
    }

    double mediaNotasFinais = static_cast<double>(somaNotasFinais) / NUM_ALUNOS;
    cout << "M�dia das notas finais: " << mediaNotasFinais << endl;

    // Imprimir a matriz de resultados
    cout << "Matriz de Resultados:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        for (int j = 0; j < NUM_COLUNAS; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
