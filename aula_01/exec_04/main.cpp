// Efetuar o cálculo e a apresentação do valor de uma prestação em atraso, utilizando a fórmula
// PRESTACAO ← VALOR + (VALOR * TAXA/100) * TEMPO).

#include <iostream>

using namespace std;

int main(){
    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double valor, taxa, prestacao;
    int tempo;

    cout << "Bem-vindo ao Calculador de Taxa";
    cout << "\nDigite o valor inicial: ";
    cin >> valor;
    cout << "Digite a taxa: ";
    cin >> taxa;
    cout << "Digite o tempo: ";
    cin >> tempo;

    prestacao = (valor+(valor * taxa/100) * tempo);

    cout << "\nPrestação total: " << prestacao << endl;

    return 0;
}