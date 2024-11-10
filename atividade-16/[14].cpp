#include <iostream>
#include <string>
#include <locale>

using namespace std;

// Defini��o da estrutura Funcionario
struct Funcionario {
    string nome;
    int idade;
    char sexo;
    string cpf;
    string dataNascimento;
    int codigoSetor;
    char cargo[31]; // Alterado para um array de caracteres com tamanho 31 para acomodar at� 30 caracteres
    float salario;
};

int main() {
    setlocale(LC_ALL, "portuguese");

    Funcionario funcionario;

    cout << "Informe os dados do funcion�rio:\n";
    cout << "Nome: ";
    getline(cin, funcionario.nome);
    cout << "Idade: ";
    cin >> funcionario.idade;
    cout << "Sexo (M/F): ";
    cin >> funcionario.sexo;
    cout << "CPF: ";
    cin >> funcionario.cpf;
    cout << "Data de Nascimento: ";
    cin.ignore(); // Limpar o caractere de nova linha no buffer
    getline(cin, funcionario.dataNascimento);
    cout << "C�digo do Setor (0-99): ";
    cin >> funcionario.codigoSetor;
    cout << "Cargo: ";
    cin.ignore(); // Limpar o caractere de nova linha no buffer
    cin.getline(funcionario.cargo, 31); // Usando cin.getline para ler at� 30 caracteres
    cout << "Sal�rio: ";
    cin >> funcionario.salario;

    cout << "\nDados do funcion�rio:\n";
    cout << "Nome: " << funcionario.nome << endl;
    cout << "Idade: " << funcionario.idade << endl;
    cout << "Sexo: " << funcionario.sexo << endl;
    cout << "CPF: " << funcionario.cpf << endl;
    cout << "Data de Nascimento: " << funcionario.dataNascimento << endl;
    cout << "C�digo do Setor: " << funcionario.codigoSetor << endl;
    cout << "Cargo: " << funcionario.cargo << endl;
    cout << "Sal�rio: " << funcionario.salario << endl;

    system("pause");
}
