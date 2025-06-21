#include <iostream>
#include <math.h>
#include <iomanip>
#include <locale.h>

using namespace std;

void execA(){
    cout << "\nLer 10 elementos de uma matriz tipo vetor e apresentá-los. \n";
    int lista[10] = {0,0,0,0,0,0,0,0,0,0};
    int tamanho = sizeof(lista)/sizeof(int);

    for(int itemLista =0; itemLista < tamanho; itemLista++){
        cout << "Digite o numero que deseja adicionar: ";
        cin >> lista[itemLista];
    }
    for(int itemLista =0; itemLista < tamanho; itemLista++){
        cout << lista[itemLista] << ", ";
    }

}

void execB(){
    int const n = 8; 
    int listaA[n];
    int listaB[n]; 

    int tamanho = sizeof(listaA)/sizeof(int);

    cout << "\nLer 8 elementos em uma matriz A tipo vetor. Construir uma matriz B de mesma dimensão com os " <<
        "elementos da matriz A multiplicados por 3. O elemento B[i] deverá ser implicado pelo elemento" <<
        "A[i]*3, o elemento B[2] implicado pelo elemento A[2]*3 e assim por diante, até 8. Apresentar o vetor B.\n";
    
    for(int i=0; i < tamanho; i++){
        cout << "Digite qual número deseja adicionar na lista A: ";
        cin >> listaA[i];
        listaB[i] = listaA[i] * 3;
    }

    for(int i=0; i < tamanho; i++){
        cout << listaB[i] << ", ";
    }
}

void execC(){
    // c) Ler duas matrizes A e B do tipo vetor com 20 elementos. Construir uma matriz C, onde cada 
    //elemento de C é a subtração do elemento correspondente de A com B. Apresentar a matriz C. 
    int const n = 20; 
    int listaA[n];
    int listaB[n]; 
    int listaC[n]; 

    int tamanho = sizeof(listaA)/sizeof(int);
    for(int i=0; i < tamanho; i++){
        cout << "Digite qual número deseja adicionar na lista A: ";
        cin >> listaA[i];
        cout << "Digite qual número deseja adicionar na lista B: ";
        cin >> listaB[i];
        listaC[i] = listaA[i] - listaB[i];
    }

    for(int i=0; i < tamanho; i++){
        cout << listaC[i] << ", ";
    }

}

void execD(){
//     d) Ler 15 elementos de uma matriz tipo vetor. Construir uma matriz B de mesmo tipo, observando a 
// seguintes lei de formação: “Todo elemento de B deverá ser o quadrado do elemento de A 
// correspondente”. Apresentar as matrizes A e B. 

    int const n = 15; 
    double listaA[n];
    double listaB[n]; 

    for(int i=0; i < n; i++){
        cout << "Digite qual numero deseja adicionar na lista A: ";
        cin >> listaA[i];
        listaB[i] = pow(listaA[i], 2);
    }

    cout << "Lista A: ";
    for(int i=0; i < n; i++){
        cout << listaA[i] << " | ";
    }
    cout << "\n";
    cout << "Lista B: ";
    for(int i=0; i < n; i++){
        cout << listaB[i] << " | ";
    }
    
    
}

void execE(){
//     e) Ler duas matrizes A e B do tipo vetor com 15 elementos cada. Construir uma matriz C, sendo esta a 
// junção das duas outras matrizes. Desta forma, C deverá ter o dobro de elementos, ou seja, 30. 
// Apresentar a matriz C. 

    int const n = 15; 
    double listaA[n];
    double listaB[n]; 
    double listaC[30]; 

    for(int a=0; a < n; a++){
        cout << "Digite qual numero deseja adicionar na lista A: ";
        cin >> listaA[a];
        listaC[a] = listaA[a];
    }

    for(int b=0; b < n; b++){
        cout << "Digite qual número deseja adicionar na lista B: ";
        cin >> listaB[b];
        listaC[b+15] = listaB[b];
    }

    cout << "Lista C: ";
    for(int i=0; i < 30; i++){
        cout << listaC[i] << " | ";
    }

}

void execF(){
//     f) Ler duas matrizes do tipo vetor, sendo A com 20 elementos e B com 30 elementos. Construir uma 
// matriz C, sendo esta a junção das duas outras matrizes. Desta forma, C deverá ter a capacidade de 
// armazenar 50 elementos. Apresentar a matriz C. 
    int const a = 20; 
    int const b = 30; 
    double listaA[a];
    double listaB[b]; 
    double listaC[a+b]; 

    for(int i=0; i < a; i++){
        cout << "Digite qual numero deseja adicionar na lista A: ";
        cin >> listaA[i];
        listaC[i] = listaA[i];
    }

    for(int i=0; i < b; i++){
        cout << "Digite qual número deseja adicionar na lista B: ";
        cin >> listaB[i];
        listaC[i+20] = listaB[i];
    }

    cout << "Lista C: ";
    for(int i=0; i < 50; i++){
        cout << listaC[i] << " | ";
    }

}

void execG(){
//     g) Ler 20 elementos de uma matriz A tipo vetor e construir uma matriz B de mesma dimensão com os 
// mesmo elementos da matriz A, sendo que deverão estar invertidos. Ou seja, o primeiro elemento de 
// A passa a ser o último de B, o segundo elemento de A passa a ser o penúltimo elemento de B e 
// assim por diante. Apresentar as matrizes A e B lado a lado.

    int const n = 20; 
    double listaA[n];
    double listaB[n]; 

    for(int i=0; i < n; i++){
        cout << "Digite qual numero deseja adicionar na lista A: ";
        cin >> listaA[i];
        listaB[19-i] = listaA[i];
    }

    cout << "Lista A: ";
    for(int i=0; i < n; i++){
        cout << listaA[i] << " | ";
    }
    cout << "\n";
    cout << "Lista B: ";
    for(int i=0; i < n; i++){
        cout << listaB[i] << " | ";
    }

}

void menu(){
    char opcao;
    string resposta;

    do {
        system("cls");
        cout << "\nExercicios de Vetores! Escolha qual deseja ver: ";
        cout << "\n(A)";
        cout << "\n(B)";
        cout << "\n(C)";
        cout << "\n(D)";
        cout << "\n(E)";
        cout << "\n(F)";
        cout << "\n(G)";
        cout << "\nExercicio: ";
        cin >> opcao;

        switch (tolower(opcao))
        {
        case 'a':
            system("cls");
            cout << "Escolheu: A";
            execA();
            system("pause");
            break;
        case 'b':
            system("cls"); 
            cout << "Escolheu: B";
            execB();
            system("pause");
            break;

        case 'c':
            system("cls"); 
            cout << "Escolheu: C \n";
            execC();
            system("pause");
            break;
        
        case 'd':
            system("cls"); 
            cout << "Escolheu: D \n";
            execD();
            system("pause");
            break;

        case 'e':
        system("cls"); 
            cout << "Escolheu: E \n";
            execE();
            system("pause");
            break;

        case 'f':
            cout << "Escolheu: F \n";
            execF();
            system("pause");
            break;

        case 'g':
            cout << "Escolheu: G \n";
            execG();
            system("pause");
            break;
        
        
        default:
            cout << "Erro de digitação!";
            break;
        }

    } while(true);
}

int main(){
    setlocale(LC_ALL, "Portuguese-brazilian");
    cout << fixed << setprecision(2);
    menu();
    return 0;
}