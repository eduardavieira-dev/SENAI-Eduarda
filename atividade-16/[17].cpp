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

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;
    cout << "Digite o segundo n�mero: ";
    cin >> num2;
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;

    int maior = maiorNumero(num1, num2, num3);
    int menor = menorNumero(num1, num2, num3);

    cout << "O maior n�mero �: " << maior << endl;
    cout << "O menor n�mero �: " << menor << endl;

    system("pause");
}
