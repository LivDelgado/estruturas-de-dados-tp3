#ifndef CRIADOR_ARVORE
#define CRIADOR_ARVORE

#include "estruturas/arvoreTransliteracao.hpp"
#include <string>

namespace comunicacao {
    class CriadorArvore {
        private:
            estruturas::ArvoreTransliteracao* arvore;

        public:
            CriadorArvore();
            ~CriadorArvore();

            void criarArvore(std::string descricaoArvore);
            estruturas::ArvoreTransliteracao* getArvore();
    };
}

#endif
