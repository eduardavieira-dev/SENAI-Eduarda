#include <iostream>
#include <locale.h>

using namespace std;

const int NUM_ALUNOS = 5;
const int NUM_COLUNAS = 4;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[NUM_ALUNOS][NUM_COLUNAS];

    // Leitura das informações e cálculo das notas finais
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Aluno " << i + 1 << ":" << endl;

        cout << "Número de Matrícula: ";
        cin >> matriz[i][0];

        cout << "Média das Provas: ";
        cin >> matriz[i][1];

        cout << "Média dos Trabalhos: ";
        cin >> matriz[i][2];

        // Cálculo da nota final
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

    // Imprimir matrícula do aluno com maior nota final
    cout << "Matrícula do aluno com maior nota final: " << matriz[indiceMaiorNota][0] << endl;

    // Calcular e imprimir média aritmética das notas finais
    int somaNotasFinais = 0;

    for (int i = 0; i < NUM_ALUNOS; i++) {
        somaNotasFinais += matriz[i][3];
    }

    double mediaNotasFinais = static_cast<double>(somaNotasFinais) / NUM_ALUNOS;
    cout << "Média das notas finais: " << mediaNotasFinais << endl;

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
