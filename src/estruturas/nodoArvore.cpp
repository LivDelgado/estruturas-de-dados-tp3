#include "estruturas/nodoArvore.hpp"

#define ESPACO 95

using namespace estruturas;

NodoArvore::NodoArvore() {
    this->nodoEsquerdo = nullptr;
    this->nodoDireito = nullptr;
}

NodoArvore::~NodoArvore() {
    delete this->nodoEsquerdo;
    delete this->nodoDireito;
}

void NodoArvore::setItem(char item) {
    this->item = item;
}

void NodoArvore::setNodoEsquerdo(NodoArvore* nodo) {
    this->nodoEsquerdo = nodo;
}

void NodoArvore::setNodoDireito(NodoArvore* nodo) {
    this->nodoDireito = nodo;
}

char NodoArvore::getItem() {
    return this->item;
}

NodoArvore* NodoArvore::getNodoEsquerdo() {
    return this->nodoEsquerdo;
}

NodoArvore* NodoArvore::getNodoDireito() {
    return this->nodoDireito;
}

bool NodoArvore::itemEhEspaco() {
    return this->getItemInteiro() == ESPACO;
}

int NodoArvore::getItemInteiro() {
    int itemInteiro = this->item;
    return itemInteiro;
}
