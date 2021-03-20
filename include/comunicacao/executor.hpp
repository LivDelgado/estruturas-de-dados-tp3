#ifndef EXECUTOR
#define EXECUTOR

#include "criadorArvore.hpp"
#include "decodificacao/decodificador.hpp"
#include "decodificacao/codificador.hpp"
#include "estruturas/arvoreTransliteracao.hpp"
#include "comando.hpp"

namespace comunicacao {
    class Executor {
        private:
            CriadorArvore* criadorArvore;
            decodificacao::Decodificador* decodificador;
            decodificacao::Codificador* codificador;
            estruturas::ArvoreTransliteracao* arvore;

            void executarComando(Comando* comando);
            void imprimirResultadoComando(std::string resultadoComando);

        public:
            Executor();
            ~Executor();

            void executarComandos(Comando* comandos, int numeroComandosAExecutar);
    };
}

#endif
