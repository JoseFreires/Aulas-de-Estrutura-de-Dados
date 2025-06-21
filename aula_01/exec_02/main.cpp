// Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula do volume de um cone

#include <iostream>
#include <math.h>

#define pi 3.14
using namespace std;


int main(){
    system("cls");

    setlocale(LC_ALL, "Portuguese");

    double volume, altura, raio;

    cout << "Bem-vindo ao Sistema de Calcular Volumes de Latas";
    cout << "\nDigite a altura da lata: ";
    cin >> altura;
    cout << "Digite o raio da lata: ";
    cin >> raio;

    volume = pi * pow(raio, 2) * altura;

    cout << "\nO volume da lata: " << volume << endl;

    return 0;

}