#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;

ArvoreBinariadeBusca::ArvoreBinariadeBusca() {
    raiz = NULL;
}

ArvoreBinariadeBusca::~ArvoreBinariadeBusca() {
}

void ArvoreBinariadeBusca::deletarArvore(No* Noatual) {
}

No* ArvoreBinariadeBusca::obterRaiz() {
    return raiz;
}

bool ArvoreBinariadeBusca::estavazio() {
    return (raiz == NULL);
}

bool ArvoreBinariadeBusca::estacheio() {
    try{
        No* temp = new No;
        delete temp;
        return false;   
    } catch (std::bad_alloc exception) {
        return true;
    }
}

void ArvoreBinariadeBusca::inserir(Aluno aluno) {
    if(estacheio()){
        cout << "A arvore esta cheia!\n";
        cout << "Nao foi possivel inserir este elemento!\n";
    }else{
        No* NoNovo = new No;
        NoNovo->aluno = aluno;
        NoNovo->filhodireita = NULL;
        NoNovo->filhoesquerda = NULL;

        if(raiz == NULL){
            raiz = NoNovo;
        }else{
            No* temp = raiz;
            while(temp != NULL){
                if(aluno.obterRa() < temp->aluno.obterRa()){
                    if(temp->filhoesquerda == NULL){
                        temp-> filhoesquerda = NoNovo;
                        break;
                    }else{
                        temp = temp ->filhoesquerda;
                    }
                }else{
                    if(temp->filhodireita == NULL){
                        temp->filhodireita = NoNovo;
                        break;
                    }else{
                        temp = temp->filhodireita;
                    }
                }
            }
        }
    }
}

void ArvoreBinariadeBusca::remover(Aluno aluno) {
}

/*
 * Observação:
 * A primeira versão deste método foi baseada na implementação apresentada
 * na aula gravada. Porém, ao revisar a lógica da busca, foi identificado que
 * a comparação estava sendo feita utilizando apenas o RA do nó atual, em vez
 * de comparar com o RA do aluno procurado.
 *
 * A implementação foi ajustada para comparar o RA do aluno recebido como
 * parâmetro com o RA armazenado no nó atual da árvore.
 */
void ArvoreBinariadeBusca::buscar(Aluno& aluno, bool& busca) {
    busca = false;
    No* noatual = raiz;
    while(noatual != NULL){
        if(aluno.obterRa() < noatual->aluno.obterRa()){
            noatual = noatual->filhoesquerda;
        }else if(aluno.obterRa() > noatual->aluno.obterRa()){
            noatual = noatual->filhodireita;
        }else{
            busca = true;
            aluno = noatual->aluno;
            break;
        }
    }
}

void ArvoreBinariadeBusca::imprimirpreordem(No* Noatual) {
}

void ArvoreBinariadeBusca::imprimiremordem(No* Noatual) {
}

void ArvoreBinariadeBusca::imprimirposordem(No* Noatual) {
}