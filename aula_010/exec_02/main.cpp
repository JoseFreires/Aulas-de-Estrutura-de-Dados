// Usando malloc e ponteiros, codifique o Código Fonte de uma LIFO dinâmica para empilhar nomes e salários de uma pessoa qualquer. 
// Faça o menu de controle para executar o código.

#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

typedef struct Funcionarios pilhaFunc;

struct Funcionarios{
    char nome[100];
    double salario;
    pilhaFunc *anterior;
};


pilhaFunc * topo = NULL;

double recebeSalarioFuncionario(){
    double salario;
    cout << "Digite o salario do funcionario: ";
    cin >> salario;
    return salario;
}

void pushFunc(){
    pilhaFunc * pilhaTemp = ( pilhaFunc * ) malloc(sizeof(pilhaFunc));
    if (pilhaTemp == NULL) {
        cout << "Erro ao alocar memória!\n";
        return;
    }

    // Adicionando nome do funcionário
    cout << "Digite o nome do funcionario: ";
    cin.ignore();
    cin.getline(pilhaTemp->nome, 100);

    // Adicionando salário do funcionário
    cout << "Digite o salario do funcionario: ";
    cin >> pilhaTemp->salario;;

    pilhaTemp->anterior = topo;
    topo = pilhaTemp;

    cout << "Funcionário adicionado!\n";
    system("pause");
}

void popFunc(){
    if (topo == NULL) {
        cout << "Pilha vazia!\n";
        return;
    }

    Funcionarios* pilhaTemp = topo;
    topo = topo->anterior;

    cout << "Foi retirado o seguinte funcionário: \n";
    cout << "Nome: " << pilhaTemp->nome << "- R$" << pilhaTemp->salario << "\n";
   
    free(pilhaTemp);
    system("pause");
}


void exibirFuncionarios(){
    if (topo == NULL) {
        cout << "Pilha vazia!\n";
        return;
    }

   Funcionarios* atualFunc = topo;
   cout << "Funcionários listados: \n";
   while (atualFunc != NULL) {
    cout << "Nome: " << atualFunc->nome << " - R$" << atualFunc->salario << endl;
    atualFunc = atualFunc->anterior;
   }
    system("pause");
}

void destruirPilha(){
    Funcionarios* pilhaTemp;
    while ( pilhaTemp != NULL ) {
        pilhaTemp = topo;
        topo = pilhaTemp->anterior;
        free ( pilhaTemp );
    }
    free(topo);
    cout << "\nA pilha foi destruida!\n";
    system("pause");
}

void menu(){
    int tecla;

    do {
        system("cls");
        cout << "Bem-vindo ao Construtor da LIFO \n";
        cout << "Escolha qual opção deseja executar: \n1) Adicionar funcionario \n2) Exibir lista de funcionarios \n3) Retirar último funcionario \n4) Destruir pilha \nR: ";
        cin >> tecla;

        switch (tecla) {
            case 1:
                pushFunc();
                break;
            case 2:
                exibirFuncionarios();
                break;
            case 3:
                popFunc();
                break;
            case 4:
                cout << "Destruiu!";
                break;
            default:
                cout << "Opção Inválida!";
                break;
        }
    } while (tecla != 4);
   
}

int main(){
    menu();
    return 0;
}