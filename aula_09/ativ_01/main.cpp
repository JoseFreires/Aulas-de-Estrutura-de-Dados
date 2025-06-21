// Faça um programa em C++ contendo menu de controle para gerar uma quantidade indefinida
// de valores diferentes randômicos e reais (double) e armazene em um ponteiro criado a partir da
// pilha heap (CALLOC). Ao final exiba a média de todos os números gerados, o somatório, o maior
// valor e o menor valor;

#include <iostream>
#include <cstdlib>

using namespace std;

double *pont;

int geraQuantNumRandom(){
    return rand() % 10;
}

double geraNumRandom(){
    return rand() % 100;
}

void populaVetor(){
    pont = (double *) calloc(10, sizeof(double)); 

    for(int indice = 0 ;indice < 10; indice++){
        pont[indice] = geraNumRandom();
    }
}

void mostraVetor(){
    for(int indice = 0 ;indice < 10; indice++){
        cout << pont[indice] << " ";
    }

    return;
}


void menu(){
    int resposta;
    cout << "Bem-vindo ao Controlador de Números Aleatórios! \n";
    populaVetor();
    cout << "Selecione qual opção deseja: \n1) Mostrar os números gerados; \n2) Realizar a média deles; \n3) A soma deles \n4) O maior número \n5) Menor número \nResposta:";
    cin >> resposta; 

    do{
        switch (resposta)
        {
        case 1:
            mostraVetor();
            break;
        case 2:

            break;
        case 3:

            break;
        default:
            break;
        }
    } while (resposta > 5);
}

int main() {
    menu();
    return 0;
}