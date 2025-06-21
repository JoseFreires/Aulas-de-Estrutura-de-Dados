// Crie um algoritmo que tenha um vetor de idades e um vetor de nomes, 
// cujos dados deverão ser lidos pelo teclado. Ao final Exiba o nome da pessoa 
// de maior idade, menor idade, a média das idades e o saldo das idades.


#include "iostream"
#include "cstdlib"
#include <iomanip>
#include <locale.h>

using namespace std;

string nomes[5];
int idades[5];
string nomeMaior;
int idadeMaior;
string nomeMenor;
int idadeMenor;
double media = 0.0;

void maiorMenor(){
    for(int i = 0; i < 5; i++){
        if(idades[i] > idadeMaior || i == 0){
            nomeMaior = nomes[i];
            idadeMaior = idades[i];
        }
        if(idades[i] < idadeMenor || i == 0){
            nomeMenor = nomes[i];
            idadeMenor = idades[i];
        }
    }
}

void mediaDados(){
    double soma;

    for(int i = 0; i < 5; i++){
        soma += idades[i];
    }
    media = soma/5;
}

void recebeDados(){
    cout << "Recebendo dados....\n";
    for(int i = 0; i < 5; i++){
        cout << "Digite o " << i+1 << "° nome: ";
        cin >> nomes[i];
        cout << "Digite o " << i+1 << "ª idade: ";
        cin >> idades[i];
    }
}

void trataDados(){
    maiorMenor();
    mediaDados();
}

void mostraDados(){
    cout << "Apresentando dados....\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nome: " << nomes[i] << " | " << "Idade: " << idades[i] << "\n";
    }
    cout << "\nMaior idade: " << idadeMaior << " do " << nomeMaior;
    cout << "\nMenor idade: " << idadeMenor << " do " << nomeMenor;
    cout << "\nMedia de idade: " << media << "\n";
    system("pause");
}


int main(){
    setlocale(LC_ALL, "Portuguese-brazilian");
    cout << fixed << setprecision(2);
    recebeDados();
    trataDados();
    mostraDados();

    return 0;
}