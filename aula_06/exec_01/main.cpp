// Faça o código estruturado para controlar uma LIFO com arranjo não
// dinâmico contendo os atributos: nome, idade e salário.

#include "iostream"
#define max 5
using namespace std;

typedef struct lifo pilha;

struct lifo { 
    int topo;
    string nome[max]; 
    int idade[max];
    double salario[max];

};

bool pilhaCheia(pilha p){
    if(p.topo == max - 1){
        return true;
    }
    return false;
}

bool pilhaVazia(pilha p){
    if(p.topo ==- 1){
        return true;
    }
    return false;
}

pilha push(string valorNome, int valorIdade, double valorSalario, pilha p){
    if(pilhaCheia(p) == true){
        cout << "\nPilha cheia";
        system("pause");
        return p;
    }

    p.topo ++;
    p.nome[p.topo] = valorNome;
    p.idade[p.topo] = valorIdade;
    p.salario[p.topo] = valorSalario;

    cout << "Os valores adicionados foi: \nNome: " << valorNome << "\nIdade: " << valorIdade << "\nSalario: " << valorSalario << endl;

    system("pause");

    return p;
}

pilha pop(pilha p){
    if(pilhaVazia(p) == true){
        cout << "\nJá está vazio!";
        system("pause");
        return p;
    }

    cout << "\nO funcinário que vai ser retirado vai ser: \nNome: " << p.nome[p.topo] << "\nIdade: " << p.idade[p.topo] << "\nSalario: " << p.salario[p.topo] << endl;
    system("pause");
    p.nome[p.topo] = '\0';
    p.idade[p.topo] = '\0';
    p.salario[p.topo] = '\0';
    p.topo --;
    return p;
}

void mostrarPilha(pilha p){
    if (pilhaVazia(p) == true){
        cout << "\nA pilha está vazia!";
        system("pause"); 
        return; 
    }

    for(int index = p.topo; index >= 0; index--){
        cout << "------------------------\n";
        cout << "Nome: " << p.nome[index];
        cout << "\nIdade: " << p.idade[index];
        cout << "\nSalario: " << p.salario[index];
        cout << "\n------------------------\n";
    }
    system("pause");
}

double recebeValorSalario(){
    double salario;
    cout << "\nDigite o salario do funcionario: ";
    cin >> salario;
    return salario;
}

int recebeValorIdade(){
    int idade;
    cout << "Digite a idade do funcionario: ";
    cin >> idade;
    return idade;
}

string recebeValorNome(){
    string nome;
    cout << "Digite o nome do funcionario: ";
    cin >> nome;
    return nome;
}

int tela(){
    int tecla;
    system("cls");
    cout << "Bem-vindo a lista dos funcinários";
    cout << "\n---Selecione uma opção---\n1-Adicionar\n2-Retirar o último\n3-Mostrar funcionarios\n4-Finalizar\nItem: ";
    cin >> tecla;
    return tecla;
}

void controlarPilha(pilha p1){
    int tecla,valorIdade;
    string valorNome;
    double valorSalario;

    p1.topo = -1;

    do{
        tecla = tela();
        switch (tecla)
        {
        case 1:
            valorNome = recebeValorNome();
            valorIdade = recebeValorIdade();
            valorSalario = recebeValorSalario();
            p1 = push(valorNome, valorIdade, valorSalario, p1);
            break;
        case 2:
            p1 = pop(p1);
            break;
        case 3:
            mostrarPilha(p1);
            break;
        default:
            break;
        }
    } while (tecla != 4);
    
}

int main(){
    pilha p1;
    controlarPilha(p1);
    return 0;
}