#include "estruturas/arvoreTransliteracao.hpp"

#define DIREITA 'D'
#define ESQUERDA 'E'
#define ESPACO 95

using namespace estruturas;

ArvoreTransliteracao::ArvoreTransliteracao() {
    this->raiz = nullptr;
}

ArvoreTransliteracao::~ArvoreTransliteracao() {
    delete this->raiz;
}

void ArvoreTransliteracao::inserirElemento(char elemento) {
    NodoArvore* nodoAtual = this->raiz;

    NodoArvore novoNodo = NodoArvore();
    novoNodo.setItem(elemento);

    while (nodoAtual) {
        if (nodoAtual->getItem() == elemento) {
            return;
        } else if (elemento < nodoAtual->getItem() || novoNodo.itemEhEspaco()) {
            nodoAtual = nodoAtual->getNodoEsquerdo();
        } else {
            nodoAtual = nodoAtual->getNodoDireito();
        }
    }

    nodoAtual = &novoNodo;
}

int ArvoreTransliteracao::buscarElemento(char elemento) {
    NodoArvore* nodoAtual = this->raiz;

    NodoArvore nodoABuscar = NodoArvore();
    nodoABuscar.setItem(elemento);

    while (nodoAtual) {
        if (nodoAtual->getItem() == elemento) {
            return nodoAtual->getItemInteiro();
        } else if (elemento < nodoAtual->getItem() || nodoABuscar.itemEhEspaco()) {
            nodoAtual = nodoAtual->getNodoEsquerdo();
        } else {
            nodoAtual = nodoAtual->getNodoDireito();
        }
    }

    return -1;    
}

std::string ArvoreTransliteracao::buscarCaminhoElemento(char elemento) {
    NodoArvore* nodoAtual = this->raiz;
    std::string caminhoPercorrido = "";

    NodoArvore nodoABuscar = NodoArvore();
    nodoABuscar.setItem(elemento);

    while (nodoAtual) {
        if (nodoAtual->getItem() == elemento) {
            return caminhoPercorrido;
        } else if (elemento < nodoAtual->getItem() || nodoABuscar.itemEhEspaco()) {
            nodoAtual = nodoAtual->getNodoEsquerdo();
            caminhoPercorrido += ESQUERDA;
        } else {
            nodoAtual = nodoAtual->getNodoDireito();
            caminhoPercorrido += DIREITA;
        }
    }

    return "";
}
