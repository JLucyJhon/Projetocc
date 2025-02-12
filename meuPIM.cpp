#include <iostream>
#include <string>
#include <ctime>
#include <fstream>


using namespace std;
int main() {
	system("color 02");
	string nome, cpf, cep, idade,endereco, cidade, bairro, estado, email, telefone;
	string datnascimento, datdiagnostico, comorbidade, auxcomo;
	int possuicomo;

	string strAno;
	int AnoNascimento, idadePac;

	time_t t = time(nullptr);
	tm*agora = localtime(&t);
	int anoAtual = agora->tm_year + 1900;

	string nomearq = "123456";
	string linhaarq;
	string idPac;
	ifstream arq;

	int usuario = 1234;
	int senha = 6789;

	int infousuario, infosenha;
	bool loginOK = false;

	int escolha;
	bool saida= false;

	cout << "por favor, insira seu nome de usuario:   ";
	cin >> infousuario;
	cout << "" << endl;
	cout << "insira sua senha numerica por favor: ";
	cin >> infosenha;
	cout << "" << endl;

	if(infousuario == usuario) {
		if(infosenha == senha) {
			cout << "usuario conectado com sucesso" << endl;
			system("pause");
			system("cls");

			loginOK = true;
		} else {
			cout << "senha incorreta" << endl;
			system("pause");
			system("cls");
		}
	} else {
		cout << "seu usuario esta incorreto" << endl;
		system("pause");
		system("cls");
	}
	if(loginOK) {
		system("color 04");
		cout << "sistema de estatistica e coleta para o virus COVID 19" << endl;
		system("pause");
		system("cls");
		do {
			cout << "1-Salvar dados do paciente" << endl;
			cout << "2- verificar dados do paciente" << endl;
			cout << "3- Enviar estatística" << endl;
			cout << "0 - Encerrar programa" << endl;
			cout << "" << endl;
			cout << "informe a opção que você deseja: " << endl;
			cin >> escolha;

			switch(escolha) {
				case 1:
					system("cls");
					cout << "Cadastramento" << endl;
					cout << "" << endl;
					getline(cin, nome);

					cout << "digite o nome completo do paciente: ";
					getline(cin, nome);

					cout << "informe o cpf do paciente por favor:";
					cin >> cpf;

					cout << "escreva o endereço do paciente:";
					cout << "" << endl;
					getline(cin, endereco);

					cout << "digite a cidade do paciente: ";
					getline(cin, cidade);

					cout << "digite o bairro do paciente: ";
					cin >> bairro;

					cout<< "informe o estado do paciente:";
					cout << "" << endl;
					getline(cin, estado);
					cout << "digite o cep do paciente: ";
					cin >> cep;

					cout << "informe o email do paciente: ";
					cin >> email;

					cout << "informe o telefone para contato: ";
					cin >> telefone;

					cout << " o paciente possui comorbidades?(1- sim, outros valores para não)" << endl;
					cin >> possuicomo;

					if(possuicomo == 1) {
						cout << "";
						getline(cin, comorbidade);

						cout << "informe qual a comorbidade: " << endl;
						getline(cin, comorbidade);

					} else {
						comorbidade = "nenhuma";
					}
					system("cls");
					cout << "";


					system("pause");
					break;

				case 2:


					break;
				case 3:
					break;
				case 0:
					system("cls");
					cout << "obrigado pelo acesso, ficamos muito feliz com a sua presenca" << endl;
					saida = true;
					system("pause");
					break;
					default;


					system("cls");
					cout << "a opcao digitada e invalida" << endl;
					system("pause");
			}
		} while(!saida);
	} else {
		system("cls");
		return 1;
	}
	return 0;
}