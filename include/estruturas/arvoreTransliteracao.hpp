#ifndef ARVORE_TRANSLITERACAO
#define ARVORE_TRANSLITERACAO

#include "nodoArvore.hpp"

namespace estruturas {
    class ArvoreTransliteracao {
        private:
            NodoArvore* raiz;

        public:
            ArvoreTransliteracao();
            ~ArvoreTransliteracao();

            void inserirElemento(char elemento);
    };
}

#endif
