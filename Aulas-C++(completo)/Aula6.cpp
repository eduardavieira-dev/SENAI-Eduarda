#include <iostream>
#include <string>
#include <locale>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
   static CONSOLE_FONT_INFOEX  fontex;
    fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    GetCurrentConsoleFontEx(hOut, 0, &fontex);
    fontex.FontWeight = 700;
    fontex.dwFontSize.X = 20;
    fontex.dwFontSize.Y = 20;
    
    SetConsoleTextAttribute(hConsole, 14);
	
setlocale(LC_ALL, "portuguese"); 
    
    int cor_f;
    
    cout << "Digite um número para mudar a cor do texto: ";
    cin >> cor_f; 
    
    

SetConsoleTextAttribute(hConsole, cor_f);

cout << "Pronto! O seu texto mudou de cor.";

SetConsoleTextAttribute(hConsole, 7);

	return 0;
}