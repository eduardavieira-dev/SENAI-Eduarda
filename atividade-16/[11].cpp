#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <ctime>
#include <locale>

using namespace std;
       
       
struct Agendamento {
    int horas;
    int minutos;
    int segundos;
    int dia;
	int mes;
    int ano;
    string descricao;
};

int main() {
   setlocale(LC_ALL, "portuguese");
    vector<Agendamento> agendamentos;
    
    char opcao;
    
    do {
        Agendamento novoAgendamento;
        
        
        chrono::system_clock::time_point now = chrono::system_clock::now();
        time_t now_time = chrono::system_clock::to_time_t(now);
        tm* now_tm = localtime(&now_time);
        
        novoAgendamento.dia = now_tm->tm_mday;
		novoAgendamento.horas = now_tm->tm_hour;
        novoAgendamento.minutos = now_tm->tm_min;
        novoAgendamento.segundos = now_tm->tm_sec;
        novoAgendamento.mes = now_tm->tm_mon + 1; 
        novoAgendamento.ano = now_tm->tm_year + 1900; 
        
        cout << "Informe a descrição do agendamento: \n";
        cin.ignore();
        getline(cin, novoAgendamento.descricao);
        
        agendamentos.push_back(novoAgendamento);
        
        cout << "Agendamento adicionado com sucesso!" << endl;
        
		system("cls");
        
		cout << "Deseja adicionar outro agendamento? (S/N): \n";
        cin >> opcao;
    } while (opcao == 'S' || opcao == 's');
    
   
    cout << "Agendamentos:" << endl << endl;
    for (const auto& agendamento : agendamentos) {
        cout << "Data e Hora: " << agendamento.dia << "/" << agendamento.mes << "/" << agendamento.ano << " " << agendamento.horas << ":" << agendamento.minutos << ":" << agendamento.segundos << endl;
        cout << "Descrição: " << agendamento.descricao << endl;
        cout << endl;
    }
    
   system("pause");
    //return 0;
}
