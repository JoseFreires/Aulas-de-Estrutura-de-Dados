// Faça o algoritmo para calcular o valor de uma prestação em atraso
// com base na multa de 2% e também do juros mensal de 1% sobre o valor
// principal. Declare vetores não explícitos para entrada do valor da dívida, 
// Divida [5] e da quantidade de dias em atraso: Dias [5]. Crie os vetores de saída,
// ValorMulta[5], ValorJuros[5] e ValorPagar [5]. Ao final imprima todos os vetores
// de saída. Faça um menu de controle para controlar o programa.

#include "iostream"
#include "cstdlib"

using namespace std;

int linha = -1;

double divida[5];
int dias[5];
double valorMulta[5];
double valorJuros[5];
double valorPagar[5];

double calculaDivida(double divida, int qntDias){
    double totalDivida = 0.0;
    if(qntDias < 30 || qntDias < 31){
        totalDivida = (divida*0.2)+divida;
    } else{
        totalDivida = (divida*0.2)+(divida*0.1)+divida;
    }

    return totalDivida;
}

void addLista(double valorDivida, int qntDias, double dividaTotal){
    linha ++;
    divida[linha] = valorDivida;
    dias[linha] = qntDias;
    valorMulta[linha] = valorDivida*0.2;
    if(qntDias >= 30){
        valorJuros[linha] = valorDivida*0.1;
    } else {
        valorJuros[linha] = 0.0;
    }
    valorPagar[linha] = dividaTotal;
}

void lerDivida(){
    double valorDivida;
    int qntDias = 0;

    system("cls");
    cout << "Lendo divida....";
    cout << "\nValor dela: ";
    cin >> valorDivida;
    cout << "Quantidade de dia de atraso: ";
    cin >> qntDias;

    double dividaTotal = calculaDivida(valorDivida, qntDias);
    addLista(valorDivida, qntDias, dividaTotal);
}

void mostraDividas(){
    system("cls");
    for (int i = 0; i <= linha; i++) {
        cout << "\n-x-x-x-x-x-x-x-x-x-x-";
        cout << "\nValor Inicial: " << divida[i];
        cout << "\nQnt. Dias: " << dias[i];
        cout << "\nValor Multa: " << valorMulta[i];
        cout << "\nValor Juros: " << valorJuros[i];
        cout << "\nValor a Pagar: " << valorPagar[i];
    }
    cout << "\n";
    system("pause");
}

void menu(){
    int opcao;
    do{
        system("cls");
        cout << "Bem-vindo ao Calculador de Dividas!\n";
        cout << "Selecione qual deseja iniciar:\n";
        cout << "1) Ler divida\n";
        cout << "2) Mostrar dividas\n";
        cout << "3) Finalizar\n";
        cin >> opcao;
        
        switch (opcao){
            case 1:
                lerDivida();
            break;
            case 2:
                mostraDividas();
            break;
            case 3:
                exit(0);
            break; 
            default:
                break;
        }

    } while (true);
}


int main(){
    menu();
    return 0;
}