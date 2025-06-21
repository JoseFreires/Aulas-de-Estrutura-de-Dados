// Elaborar um programa que efetue a leitura de três valores (A, B e C) 
// e apresente como resultado final à soma dos quadrados dos três valores lidos.

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double somaDosQuadrados(double a, double b, double c);

int main(){
    system("cls");
    double a, b, c;

    cout << "Digite A: ";
    cin >> a;
    cout << "Digite B: ";
    cin >> b;
    cout << "Digite C: ";
    cin >> c;

    cout << fixed << setprecision(2);
    cout << "Soma dos quadrados: " << somaDosQuadrados(a, b, c);
}

double somaDosQuadrados(double a, double b, double c){
    return sqrt(a) + sqrt(b) + sqrt(c);
}