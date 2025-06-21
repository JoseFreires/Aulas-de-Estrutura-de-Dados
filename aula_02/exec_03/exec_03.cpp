// Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em
// real. O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível
// com o usuário, para que seja apresentado o valor em moeda americana.


#include <iostream>
#include <iomanip>

using namespace std;
double real;

double convertor(double real);

int main() {
    system("cls");
    cout << "Bem-vindo ao conversor de real a dolar!";
    cout << "\nInsira o valor em real: ";

    cout << fixed << setprecision(2);
    cin >> real;
    cout << "Valor em dolar: " << convertor(real);

    return 0;
}

double convertor(double real){
    return real * 5.80;
}