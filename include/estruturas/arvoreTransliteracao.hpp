#ifndef ARVORE_TRANSLITERACAO
#define ARVORE_TRANSLITERACAO

#include "nodoArvore.hpp"
#include <string>

namespace estruturas {
    class ArvoreTransliteracao {
        private:
            NodoArvore* raiz;

        public:
            ArvoreTransliteracao();
            ~ArvoreTransliteracao();

            void inserirElemento(char elemento);
            int buscarElemento(char elemento);
            std::string buscarCaminhoElemento(char elemento);
    };
}

#endif
