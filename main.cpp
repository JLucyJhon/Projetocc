#include <iostream> 
#include <conio.h> 
#include <windows.h> 
#include <locale.h>
//incluir biblioteca pra gravar as musicas - acho que é a fstream 

using namespace std;

void playNotes(int freq, int tempo){
    if (freq > 0){
        Beep(freq, tempo);
    }
}

void guitarraVirtual(){
   while (true){
    char notes = _getch();

    switch (notes){
        case 'q':
            playNotes(82, 350);
            break;
        case 'w':
            playNotes(110, 350);
            break;
        case 'e':
            playNotes(146, 350);
            break;
        case 'r':
            playNotes(196, 350);
            break;
        case 't':
            playNotes(246, 350);
            break;
        case 'y':
            playNotes(329, 350);
            break;
        case 'b':
            cout << "Não quer mais tocar guitarra ?" << "\n"
                 << "Bom, você não é um Jimmy Page, mas continue tentando ^-^"<< endl;
            return;
            system("pause");
        default:
            cout << "Bem, parece que teclou errado... -_-" << endl;
            break; 
            		

    }
   }
}

void bateriaVirtual(){
    while(true){
        char notes = _getch();

            switch (notes){
        case '7':
            playNotes(200, 400); // caixa 
            break;
        case '8':
            playNotes(115, 400); // tom grave 
            break;
        case '9':
            playNotes(180, 400); // tom medio
            break;
        case '4':
            playNotes(280, 400); // tom agudo
            break;
        case '5':
            playNotes(80, 400); // bumbo
            break;
        case '6':
            playNotes(5000, 400); // hi-hat
            break;
        case '2':
            playNotes(5500, 400); // prato
            break;
        case '0':
            cout << "Éhhh... o Eloy Casagrande ainda é melhor, mas tudo bem °l°"<< endl;
            return;
        default:
            cout << "Bem, parece que é melhor você tentar mais tarde... ^-^'" << endl;
            break; 
        }
    }
        
}

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");
	SetConsoleOutputCP(CP_UTF8);

    system("color BD");

    cout << " " << endl;
    cout << "Aoba, esse é nosso 'joguinho' musical, seja bem vindo!" << endl;
    cout << "Temos dois instrumentos diferentes pra tocar"<< endl;
    cout << " " << endl;
    cout << "Faça sua escolha" << endl;
    cout << "1 - Guitarra" << endl;
    cout << "2 - Bateria" << endl;
    cout << "3 - Sair do joguinho" << endl;
    
    char escolha;
    cin >> escolha;

    if (escolha == '1'){
        cout << "Pode tocar sua guitarra" << endl;
        guitarraVirtual();
        system("pause");
        system("cls");

    }else if(escolha == '2'){
        cout <<"Pode tocar sua bateria"<< endl;
        bateriaVirtual();
        system("pause");
        system("cls");
    }else if (escolha == '3'){
        cout << "Obrigada por tocar, não esqueça de voltar pra praticar L(^^)" << endl;
        system("pause");
        system("cls");
    }else {
        cout <<"Escolhe algo que existe cara, pfvr..."<< endl;
        system("pause");
        
    }

    return 1; 
}
