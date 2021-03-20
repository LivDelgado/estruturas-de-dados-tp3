#include "estruturas/arvoreTransliteracao.hpp"
#include <iostream>

#define DIREITA 'D'
#define ESQUERDA 'E'

using namespace estruturas;

ArvoreTransliteracao::ArvoreTransliteracao() {
    this->raiz = nullptr;
}

ArvoreTransliteracao::~ArvoreTransliteracao() {
    delete this->raiz;
}

void ArvoreTransliteracao::inserirElemento(char elemento) {
    this->inserirRecursivamente(this->raiz, elemento);
}

void ArvoreTransliteracao::inserirRecursivamente(NodoArvore* &nodo, char item) {
    if (nodo == nullptr) {
        nodo = new NodoArvore();
        nodo->setItem(item);
    } else {
        if (item < nodo->getItem())
            inserirRecursivamente(nodo->nodoEsquerdo, item);
        else
            inserirRecursivamente(nodo->nodoDireito, item);
    }
}

int ArvoreTransliteracao::buscarElemento(char elemento) {
    NodoArvore* nodoAtual = this->raiz;

    NodoArvore nodoABuscar = NodoArvore();
    nodoABuscar.setItem(elemento);

    while (nodoAtual) {
        if (nodoAtual->getItem() == elemento) {
            return nodoAtual->getItemInteiro();
        } else if (elemento < nodoAtual->getItem() || nodoABuscar.itemEhEspaco()) {
            nodoAtual = nodoAtual->nodoEsquerdo;
        } else {
            nodoAtual = nodoAtual->nodoDireito;
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
            nodoAtual = nodoAtual->nodoEsquerdo;
            caminhoPercorrido += ESQUERDA;
        } else {
            nodoAtual = nodoAtual->nodoDireito;
            caminhoPercorrido += DIREITA;
        }
    }

    return "";
}

char ArvoreTransliteracao::buscarElementoPorCaminho(std::string caminho) {
    NodoArvore* nodoAtual = this->raiz;

    if (caminho == "") {
        return this->raiz->getItem();
    }
    for (char letra : caminho) {
        if (letra == ESQUERDA) {
            nodoAtual = nodoAtual->nodoEsquerdo;
        } else {
            nodoAtual = nodoAtual->nodoDireito;
        }
    }

    return nodoAtual->getItem();
}

void ArvoreTransliteracao::imprimirArvore() {
    caminhamentoCentral(this->raiz);
    std::cout << std::endl;
}

void ArvoreTransliteracao::caminhamentoCentral(NodoArvore *nodoAtual){
    if (nodoAtual != nullptr) {
        caminhamentoCentral(nodoAtual->nodoEsquerdo);
        std::cout << nodoAtual->getItem();
        caminhamentoCentral(nodoAtual->nodoDireito);
    }
}
