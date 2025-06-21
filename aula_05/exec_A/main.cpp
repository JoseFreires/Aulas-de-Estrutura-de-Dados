// Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e
// D). Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro
// valor, e o resultado do produto (variável P) do primeiro com o terceiro valor, e o resultado da soma
// (variável S) do segundo com o quarto valor.


#include "iostream"
#include "cstdlib"
#include "string"


using namespace std;


int const linha = 4;


string letras[] = {"A", "B", "C", "D"};


struct produtos {
    string name[linha];
    double preco[linha];
};
struct produtos obj;


string recebeNome(){
    string nome;
    cout << "\nInsira o nome do produto: ";
    cin.ignore(); // Limpa o buffer
    getline(cin, nome);
    return nome;
}


double recebePreco(){
    double preco;
    cout << "Insira o preco do produto: ";
    cin >> preco;
    return preco;
}


void guardaDados(){
    system("cls");
    for(int cursor = 0; cursor < linha; cursor++){
        cout << "Insira o produto  " << letras[cursor];
        obj.name[cursor] = recebeNome();
        obj.preco[cursor] = recebePreco();
        cout << "x-x-x-x-x-x-x-x-x-x-x-x-x\n";
    }
   
}


void mostrarValores(){
    system("cls");
    cout << "| Produto | Preco |\n";
    for(int cursor = 0; cursor < linha; cursor++){
        cout << "--------------------------\n";
        cout << "| " << obj.name[cursor] << " | " << obj.preco[cursor] << " |\n";
    }
    system("pause");
}


void realizarCalculo(){
    system("cls");
    double produto = obj.preco[1] * obj.preco[3];
    double soma = obj.preco[2] + obj.preco[4];
    cout << "Produto do primeiro com o terceiro: " << produto << "\n";
    cout << "Soma do segundo com o quarto: " << soma << "\n";
    system("pause");
}


void menu(){
   
    int resposta;
    while (resposta != 4){
        system("cls");
        cout << "Bem-vindo ao Leitor de Produtos!\n";
        cout << "Escolha uma opcao: \n1) Ler valores \n2) Mostrar Produtos\n3) Realizar calculo\n4) Finalizar programa.\nResposta: ";
        cin >> resposta;
        switch (resposta) {
        case 1:
            guardaDados();
            break;
        case 2:
            mostrarValores();
            break;
        case 3:
            realizarCalculo();      
            break;
        case 4:
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
    menu();
    return 0;
}
