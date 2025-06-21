// Fazer o código fonte de programa para ler o comprimento e calcular o 
// diâmetro, calcular o raio e finalmente a área de um círculo; ( Faça um 
//  menu com as opções necessárias, utilize goto ou while e switch case. )

#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>

double const pi = 3.14;
double comprimento; 

using namespace std;

double calcularRaio(double comprimento){
    double dobroPi;
    double raio;

    cout << "Calculando o Raio: \n";
    cout << comprimento << " = 2*" << pi << "*r\n";
    dobroPi = pi*2;
    cout << comprimento << " = " << dobroPi << "*r\n";
    raio = comprimento/dobroPi;
    cout << raio << " = r";

    return raio;
};

double calcularDiametro(double raio){
    double diametro = 2*raio;
    return diametro;
    
};

double calcularArea(double raio){
    double area = pi*pow(raio,2);
    return area;
}

void realizarCalculos(double comprimento){
    
    double raio = calcularRaio(comprimento);
    double diametro = calcularDiametro(raio);
    double area = calcularArea(raio);

    cout << "\n*****************************";
    cout << "\nResumo dos valores: ";
    cout << "\nComprimento: " << comprimento;
    cout << "\nRaio: " << raio;
    cout << "\nDiametro: " << diametro;
    cout << "\nÁrea: " << area;
    cout << "\n*****************************";
    
}


double lerComprimento(){
    double comp;
    cout << "Digite o comprimento: ";
    cin >> comp;
    return comp;
}

void menu(){
    int opcao;

    do {
        cout << "\nBem vindo ao Calculador de Círculo!";
        cout << "\n1 - Adicionar comprimento";
        cout << "\n2 - Realizar os cálculos";
        cout << "\n3 - Finalizar!";
        cout << "\nNumero: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            comprimento = lerComprimento();
            break;

        case 2:
            realizarCalculos(comprimento);
            break;

        case 3:
            exit(0);
            break;
        
        default:
            cout << "Erro de digitação!";
            break;
        }

    } while(true);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);
    menu();
    return 0;
}