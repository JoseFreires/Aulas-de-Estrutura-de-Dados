// Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula
// VOLUME ← COMPRIMENTO * LARGURA * ALTURA.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("cls");

    double comprimento, largura, altura;

    cout << "Bem vindo ao Calculador de Volume!";
    cout << "\nComprimento: ";
    cin >> comprimento;
    cout << "Largura: ";
    cin >> largura;
    cout << "Altura: ";
    cin >> altura;

    cout << fixed << setprecision(2);
    cout << "Volume: " << largura * comprimento * altura;

    return 0;
}