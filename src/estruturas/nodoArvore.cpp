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

char NodoArvore::getItem() {
    return this->item;
}

bool NodoArvore::itemEhEspaco() {
    return this->getItemInteiro() == ESPACO;
}

int NodoArvore::getItemInteiro() {
    int itemInteiro = this->item;
    return itemInteiro;
}
