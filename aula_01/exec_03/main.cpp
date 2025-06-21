// Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um
// automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto
// (TEMPO) e a velocidade média (VELOCIDADE) durante a viagem. Desta forma, será possível obter a
// distância percorrida com a fórmula DISTANCIA ← TEMPO * VELOCIDADE. Possuindo o valor da
// distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula
// LITROS_USADOS ← DISTANCIA / 12. Ao final, o programa deve apresentar os valores da velocidade
// média (VELOCIDADE), tempo gasto na viagem (TEMPO), a distancia percorrida (DISTANCIA) e a
// quantidade de litros (LITROS_USADOS) utilizada na viagem.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    system("cls");

    setlocale(LC_ALL, "portuguese");

    double velocidade, distancia, litrosUsados;
    int tempo;

    cout << "Bem vindo ao calculador de Quantidade de litros gastos!";
    cout << "\nDigite o tempo gasto: ";
    cin >> tempo;
    cout << "Digite a velocidade media: ";
    cin >> velocidade;

    distancia = tempo * velocidade;

    litrosUsados = distancia/12;

    cout << fixed << setprecision(2);
    cout << "\nA velocidade media foi: " << velocidade << " e o tempo gasto foi: " << tempo 
    << ", com isso a distancia percorrida foi: " << distancia << ". Assim foi gasto " << litrosUsados 
    << " litros";


    return 0;
}