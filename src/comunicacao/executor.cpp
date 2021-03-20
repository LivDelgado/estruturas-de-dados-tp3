#include "comunicacao/executor.hpp"
#include <iostream>

#define CRIAR_ARVORE 'A'
#define CODIFICAR 'C'
#define DECODIFICAR 'D'

using namespace comunicacao;

Executor::Executor() {
    this->criadorArvore = new CriadorArvore();
}

Executor::~Executor() {
    delete this->criadorArvore;
    delete this->decodificador;
    delete this->codificador;
    delete this->arvore;
}

void Executor::executarComandos(Comando* comandos, int numeroComandosAExecutar) {
    for (int i = 0; i < numeroComandosAExecutar; i++) {
        this->executarComando(&comandos[i]);
    }
}

void Executor::executarComando(Comando* comando) {
    std::string mensagem = "";

    switch (comando->getTipoComando()) {
        case CRIAR_ARVORE:
            this->criadorArvore->criarArvore(comando->getDescricaoComando());
            this->decodificador = new decodificacao::Decodificador(this->criadorArvore->getArvore());
            this->codificador = new decodificacao::Codificador(this->criadorArvore->getArvore());
            break;
        case CODIFICAR:
            mensagem = this->codificador->codificarMensagem(comando->getDescricaoComando());
            this->imprimirResultadoComando(mensagem);
            break;
        case DECODIFICAR:
            mensagem = this->decodificador->decodificarMensagem(comando->getDescricaoComando());
            this->imprimirResultadoComando(mensagem);
            break;
        default:
            return;
    }
}

void Executor::imprimirResultadoComando(std::string resultadoComando) {
    std::cout << resultadoComando << std::endl;
}

