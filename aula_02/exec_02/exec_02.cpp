// Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo.

#include <iostream>
#include <math.h>
 
using namespace std;
 
double subtraiNums(double num1, double num2);
 

int main(){
    system("cls");
    double resultado = subtraiNums(10, 5);
    cout << "\nTotal: " << sqrt(resultado);
    return 0;
}
 
double subtraiNums(double num1, double num2){
    return num1 - num2;
}