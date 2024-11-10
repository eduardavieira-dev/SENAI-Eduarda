#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int maiorNumero(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    return maior;
}

int menorNumero(int a, int b, int c) {
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return menor;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o terceiro número: ";
    cin >> num3;

    int maior = maiorNumero(num1, num2, num3);
    int menor = menorNumero(num1, num2, num3);

    cout << "O maior número é: " << maior << endl;
    cout << "O menor número é: " << menor << endl;

    system("pause");
}
