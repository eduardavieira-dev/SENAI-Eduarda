#include <iostream>
#include <string>
#include <locale.h>
#include <algorithm> // Para usar a fun��o sort

using namespace std;

const int NUM_PESSOAS = 5;

struct Pessoa {
    string nome;
    string endereco;
    string telefone;
};

bool compararPorNome(const Pessoa &p1, const Pessoa &p2) {
    return p1.nome < p2.nome;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    Pessoa pessoas[NUM_PESSOAS];

    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].nome);
        cout << "Digite o endere�o da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].endereco);
        cout << "Digite o telefone da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].telefone);
        cout << endl;
    }

    sort(pessoas, pessoas + NUM_PESSOAS, compararPorNome);

    cout << "Pessoas em ordem alfab�tica:\n";
    for (int i = 0; i < NUM_PESSOAS; i++) {
        cout << "------------------- Pessoa " << i + 1 << " -------------------\n";
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endere�o: " << pessoas[i].endereco << endl;
        cout << "Telefone: " << pessoas[i].telefone << endl;
        cout << endl;
    }

   system("pause");
}
