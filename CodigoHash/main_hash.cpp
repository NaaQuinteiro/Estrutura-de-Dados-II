#include <iostream>
#include "hash.h"

using namespace std;

int main(){
    cout << "Programa para guardar Hash!\n";
    int tam_vetor, max;
    cout << "Digite o tamanho da Hash!\n";
    cin >> tam_vetor;
    cout << "Digite o numero maximo de elementos!\n";
    cin >> max;
    cout << "O fator de carga eh: " << (float)max / (float)tam_vetor << endl;
    Hash alunoshash(tam_vetor, max);
    int opcao;
    int ra;
    string nome;
    bool busca;

    do{
        cout << " Digite 0 para parar o algortmo!\n";
        cout << " Digite 1 para inserir um elemento !\n";
        cout << " Digite 2 para remover um elemento !\n";
        cout << " Digite 3 para buscar um elemento !\n";
        cout << " Digite 4 para imprimir um elemento !\n";
        cin >> opcao;

        if (opcao == 1){
            cout << "Qual o RA do aluno?\n";
            cin >> ra;
            cout << " Qual eh o nome do aluno?\n";
            cin >> nome;
            Aluno aluno(ra, nome);
            alunoshash.inserir(aluno);
        }else if(opcao == 2){
            cout << "Qaul eh o RA do aluno a ser removido?\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoshash.deletar(aluno);
        }else if(opcao == 3){
            cout << "Qual eh o RA do aluno a ser buscadoW\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoshash.buscar(aluno, busca);
            if(busca){
                cout << "Aluno encontrado:\n\n";
                cout << "RA: " << aluno.obterRa() << endl;
                cout << "Nome: " << aluno.obterNome() << endl;
            }else{
                cout << "Aluno nao encontrado!\n";
            }
        }
        else if (opcao == 4){
                alunoshash.imprimir();
        }

    }while (opcao != 0);

    return 0;
}
