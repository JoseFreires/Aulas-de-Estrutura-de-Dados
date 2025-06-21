// Exercício: Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
// conversão é F ← (9 * C + 160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.


#include <iostream>
#include <math.h>
#include "cstdlib"
 
 
using namespace std;
 
int main() {

    system("cls");
    setlocale(LC_ALL, "Portuguese");

    double celsius, fahr;

    cout << "Bem-vindo ao Conversor de Temperatura!";

    cout << "\nDigite a temperatura em Celsius: ";

    cin >> celsius;

    fahr = (9*celsius + 160)/5;

    cout << "Total: " << fahr << endl;
 
    return 0;

}
 
