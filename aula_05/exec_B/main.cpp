// Ler o valor correspondente ao salário mensal (variável SM) de um trabalhador e também o valor do
// percentual de reajuste (variável PR) a ser atribuído. Apresentar o valor do novo salário (variável NS).


#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <locale.h>


using namespace std;


int const n = 5;
int qntLinhas = -1;


struct trabalhadores{
    string nome[n];
    double salario[n];
    double reajuste[n];
};
struct trabalhadores obj;


string recebeNome(){
    string nome;
    cout << "\nInsira o nome do trabalhador: ";
    cin.ignore(); // Limpa o buffer
    getline(cin, nome);
    return nome;
}


double recebeSalario(){
    double preco;
    cout << "Insira o salario atual: ";
    cin >> preco;
    return preco;
}


double recebeReajuste(){
    double reajuste;
    cout << "Porcentagem do reajuste: ";
    cin >> reajuste;
    return reajuste;
}


void guardaDados(){
    system("cls");
    qntLinhas = qntLinhas + 1;
    cout << "Insira o trabalhador  " << qntLinhas+1;
    obj.nome[qntLinhas] = recebeNome();
    obj.salario[qntLinhas] = recebeSalario();
    obj.reajuste[qntLinhas] = recebeReajuste();
}


void mostrarValores(){
    system("cls");
    cout << "| Trabalhador | Salario(com reajuste) | Porcentagem reajuste |\n";
    for(int cursor = 0; cursor <= qntLinhas; cursor++){
        cout << "--------------------------\n";
        cout << "| " << obj.nome[cursor] << " | R$" << (obj.salario[cursor] * obj.reajuste[cursor]/100) + obj.salario[cursor] << " | " << obj.reajuste[cursor] << "% |\n";
    }
    cout << "--------------------------\n";
    system("pause");
}


void menu(){
   
    int resposta;
    while (resposta != 4){
        system("cls");
        cout << "Bem-vindo ao Controle de Trabalhadores! \n";
        cout << "Escolha uma opcao: \n1) Ler informacoes do trabalhador \n2) Mostrar trabalhadores\n3) Finalizar programa.\nResposta: ";
        cin >> resposta;
        switch (resposta) {
        case 1:
            guardaDados();
            break;
        case 2:
            mostrarValores();
            break;
        case 3:
            exit(0);      
            break;
        default:
            cout << "Nenhuma opcao foi selecionada.";
            break;
        }
    }
   
   
}


int main(){
    setlocale(LC_ALL, "Portuguese-Brazilian");
    cout << fixed << setprecision(2);
    menu();
    return 0;
}
