#include <iostream>
#include <string>
#include <locale>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "portuguese");
	int opt;
	cout<< "------------Menu Utilitário------------ \n";
	cout<< "-------Escolha as opções abaixo-------- \n";
	cout<< "1. Abrir o Navegador Chrome \n";
	cout<< "2. Abrir o Explore \n";
	cout<< "3. Verificar o IP do Computador \n";
	cout<< "4. Visualizar Estrutura de Pastas \n";
	cout<< "5. Limpar a Tela \n";
	cout<< "6. Reiniciar o Computador \n";
	cout<< "7. Desligar o computador \n";
	cout<< "-------------------------------------- \n";
	cout<< "=> ";
	cin>> opt;
	
	switch (opt){
		
	case 1: 
	cout<< "O navegador Chrome será executado! \n";
	system("start chrome.exe");
	break;				
		
		case 2:
		cout<< "O Explorador de pastas do Windows foi aberto! \n";
		system("start explorer.exe");
		break;
		
			case 3:
			cout<< "Informações de IP da Rede do Sistema \n";
			system("ipconfig");
			break;
			
				case 4:
				cout<< "Vizualizando Estrutura de Pastas \n";
				// system("tree");
				system("dir");
				break;
			
				    case 5:
					system("cls");
					cout<< "Limpando a tela...";
					Sleep(1000);// equivale a 1 segundo
					system("cls");
					cout<< ".";
					Sleep(1000);
					system("cls");
					cout<< "..";
					Sleep(1000);
					system("cls");
					cout<< "...";
					Sleep(1000);
					system("cls");
					break;
						case 6:
			             cout<< "Seu Sistema será reiniciado em 3 segundos. \n";
			             Sleep(3000);
			            system("shutdown /r -t 0");
		             	break;
		             	
			             	case 7:
				             cout<< "Seu Sistema será reiniciado em 3 segundos. \n";
				             Sleep(3000);
				             system("shutdown /s -t 0");
			             	break;
	dfault: // outro caso
		cout<< "Opção Inválida \n";
		break;	             	
			
			
	}
	
	return 0;
}
