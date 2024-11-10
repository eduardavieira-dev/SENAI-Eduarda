#include <iostream>
#include <string>
#include <locale>

using namespace std;

// Estrutura de dados para representar um aluno
struct Aluno {
    string nome;
    float matricula;
    string curso;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    Aluno alunos[5]; // Vetor de alunos

    for (int x = 0; x < 5; x++) {
        system("cls");
        cout << "Informe o nome do aluno " << x + 1 << ":\n ";
        getline(cin, alunos[x].nome);
        cout << "Informe o número de matrícula do aluno " << x + 1 << ":\n";
        cin >> alunos[x].matricula;
        cin.ignore(); // Limpar o caractere de nova linha no buffer
        cout << "Informe o curso do aluno " << x + 1 << ":\n";
        getline(cin, alunos[x].curso);
    }

    cout << "------------------- Alunos cadastrados -------------------\n";

    for (int x = 0; x < 5; x++) {
        cout << "------------------- Aluno " << x + 1 << " -------------------\n";
        cout << "Nome do aluno: " << alunos[x].nome << endl;
        cout << "Matrícula do aluno: " << alunos[x].matricula << endl;
        cout << "Curso do aluno: " << alunos[x].curso << endl;
    }

    cout << "--------------------------------------------------------\n";


    return 0;
}
