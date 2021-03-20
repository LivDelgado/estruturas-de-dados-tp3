#ifndef DECODIFICADOR
#define DECODIFICADOR

#include "estruturas/arvoreTransliteracao.hpp"
#include <string>

namespace decodificacao {
    class Decodificador {
        private:
            estruturas::ArvoreTransliteracao* arvore;
        
        public:
            Decodificador(estruturas::ArvoreTransliteracao* arvore);
            ~Decodificador();

            std::string decodificarMensagem(std::string mensagem);
    };
}

#endif
