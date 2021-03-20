#ifndef CRIADOR_ARVORE
#define CRIADOR_ARVORE

#include "estruturas/arvoreTransliteracao.hpp"

namespace comunicacao {
    class CriadorArvore {
        private:
            estruturas::ArvoreTransliteracao* arvore;

        public:
            CriadorArvore();
            ~CriadorArvore();

            void criarArvore(std::string descricaoArvore); // para cada letra, inserir na árvore
            estruturas::ArvoreTransliteracao* getArvore();
    };
}

#endif
