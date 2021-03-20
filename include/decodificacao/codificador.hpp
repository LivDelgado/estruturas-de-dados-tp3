#ifndef CODIFICADOR
#define CODIFICADOR

#include "estruturas/arvoreTransliteracao.hpp"
#include <string>

namespace decodificacao {
    class Codificador {
        private:
            estruturas::ArvoreTransliteracao* arvore;
            std::string codificarCaminhoCaractere(std::string caminhoCaractereNaArvore);
            char gerarNumeroAleatorio(bool par);
        
        public:
            Codificador(estruturas::ArvoreTransliteracao* arvore);
            ~Codificador();

            std::string codificarMensagem(std::string mensagem);
    };
}

#endif
