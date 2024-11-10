#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

const int NUM_LIVROS = 5;

struct Livro {
    string titulo;
    string autor;
    int ano;
};

Livro livros[NUM_LIVROS];
int atual = 0;

void adicionarLivro() {
    if (atual < NUM_LIVROS) {
        Livro l;
        cout << "T�tulo: ";
        getline(cin, l.titulo);
        l.titulo = l.titulo.substr(0, 30);
        cout << "Autor: ";
        getline(cin, l.autor);
        l.autor = l.autor.substr(0, 15);
        cout << "Ano: ";
        cin >> l.ano;
        cin.ignore();
        livros[atual++] = l;
        cout << "Livro adicionado com sucesso!" << endl;
    } else {
        cout << "Limite de livros atingido!" << endl;
    }
}

void listarLivros() {
    cout << "------------------- Livros cadastrados -------------------\n";
    for (int x = 0; x < atual; x++) {
        cout << "------------------- Livro " << x + 1 << " -------------------\n";
        cout << "T�tulo do livro: " << livros[x].titulo << endl;
        cout << "Autor do livro: " << livros[x].autor << endl;
        cout << "Ano do livro: " << livros[x].ano << endl;
    }
    cout << "--------------------------------------------------------\n";
}

void buscarLivroPorTitulo() {
    string tituloBusca;
    cout << "Digite o t�tulo do livro que deseja buscar: ";
    getline(cin, tituloBusca);
    cout << "\nLivros encontrados com o t�tulo '" << tituloBusca << "':\n";
    for (int x = 0; x < atual; x++) {
        if (livros[x].titulo == tituloBusca) {
            cout << "------------------- Livro " << x + 1 << " -------------------\n";
            cout << "T�tulo do livro: " << livros[x].titulo << endl;
            cout << "Autor do livro: " << livros[x].autor << endl;
            cout << "Ano do livro: " << livros[x].ano << endl;
        }
    }
    cout << "--------------------------------------------------------\n";
}

int main() {
    setlocale(LC_ALL, "portuguese");
    int opcao;

    do {
        cout << "1. Adicionar Livro" << endl;
        cout << "2. Listar Livros" << endl;
        cout << "3. Buscar Livro por T�tulo" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma op��o: ";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                adicionarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                buscarLivroPorTitulo();
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Op��o inv�lida!" << endl;
        }
    } while (opcao != 4);

    system("pause");
}
