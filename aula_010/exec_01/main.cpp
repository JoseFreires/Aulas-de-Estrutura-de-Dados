// Programa criado junto dos exemplos em aula

#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

typedef struct nopilha pilha;

struct nopilha {
    int valor;
    pilha *ant;
};

pilha * topo = NULL;

void pushPilha(int valor) {
    pilha * newpilha = ( pilha * ) malloc(sizeof(pilha));
    // if(newpilha == NULL) return false;
    newpilha->valor = valor;
    newpilha->ant = topo; /* Na primeira alocação o topo ainda será nulo */
    topo = newpilha; 
}

void pop ( ) { 
    pilha * temp;
    temp = topo; /*Guarda o topo em temp */
    topo = temp->ant; /* muda o topo para o elemento anterior*/
    free(temp); /* Exclui o temp anterior */
}

void destrutor() { pilha *temp;
    while ( topo != NULL ) {
            temp = topo;
            topo = temp->ant;
            free ( temp );
        }
    free(topo);
    cout << "\na pilha foi destruida!\n";
    system("pause");
} 

void exibirpilha ( ) {
    pilha *temp;
    temp= topo;
    system("cls");
    cout << "Lista de itens da pilha:\n";
    while (temp->ant != NULL) {
        cout << "\n" << temp->valor << endl;
        temp = temp->ant;
    }
    system("pause");
}

void menu(){
    int tecla;
    while (tecla != 5) {
        system("cls");
        cout << "Bem-vindo ao Construtor da LIFO \n";
        cout << "Escolha qual opção deseja executar: \n1) Adicionar item a pilha \n2) Exibir pilha \n3) Retirar item do topo da pilha \n4) Destruir pilha \nR: ";
        cin >> tecla;

        switch (tecla) {
            case 1:
                int num;
                cout << "Qual número deseja adicionar? R: ";
                cin >> num;
                pushPilha(num);
                break;
            case 2:
                exibirpilha();
                break;
            case 3:
                pop();
                break;
            case 4:
                destrutor();
                break;
            default:
                break;
        }
    } 
   
}

int main(){
    setlocale(LC_ALL, "Portuguese-Brazilian");
    menu();
    return 0;
}