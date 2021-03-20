#ifndef COMUNICADOR
#define COMUNICADOR

#include "leitura/leitorArquivos.hpp"
#include "conversao/conversor.hpp"
#include "executor.hpp"
#include "comando.hpp"

#include <string>

namespace comunicacao {
    class Comunicador {
        private:
            leitura::LeitorArquivos* leitor;
            conversao::Conversor* conversor;
            Executor* executor;

        public:
            Comunicador();
            ~Comunicador();
            void estabelecerComunicacaoEntreNaveECentral(std::string caminhoArquivo);
                /*
                - ler arquivo
                - converter comandos
                - passar comandos pro executor
                */
    };
}

#endif
