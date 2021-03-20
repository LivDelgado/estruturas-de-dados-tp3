#ifndef ARVORE_TRANSLITERACAO
#define ARVORE_TRANSLITERACAO

#include "nodoArvore.hpp"
#include <string>

namespace estruturas {
    class ArvoreTransliteracao {
        private:
            NodoArvore* raiz;
            void inserirRecursivamente(NodoArvore* &nodo, char item);
            void caminhamentoCentral(NodoArvore* nodoAtual);

        public:
            ArvoreTransliteracao();
            ~ArvoreTransliteracao();

            void inserirElemento(char elemento);
            int buscarElemento(char elemento);
            std::string buscarCaminhoElemento(char elemento);
            char buscarElementoPorCaminho(std::string caminho);
            NodoArvore* getRaiz();
            void imprimirArvore();
    };
}

#endif
