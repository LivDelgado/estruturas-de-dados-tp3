#ifndef CODIFICADOR
#define CODIFICADOR

#include "estruturas/arvoreTransliteracao.hpp"
#include <string>

namespace decodificacao {
    class Codificador {
        private:
            estruturas::ArvoreTransliteracao* arvore;
        
        public:
            Codificador(estruturas::ArvoreTransliteracao* arvore);
            ~Codificador();

            std::string codificarMensagem(std::string mensagem);
    };
}

#endif
