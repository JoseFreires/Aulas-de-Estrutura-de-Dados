// Elaborar um programa que calcule e apresente o volume de uma caixa retangular, por meio da fórmula
// VOLUME ← COMPRIMENTO * LARGURA * ALTURA.

#include <iostream>
#include <math.h>
 
using namespace std;
 
void calculaVolume(double largura, double altura, double comprimento);
int main(){
    system("cls");
    cout << "Bem-vindo ao Calculador de Volume";
    calculaVolume(10, 10, 10);
    return 0;
}
 
void calculaVolume(double largura, double altura, double comprimento){
    double volume = largura * altura * comprimento;
    cout << "\nVolume: " << volume;
};