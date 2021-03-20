#include "decodificacao/decodificador.hpp"
#include <sstream>

#define ESQUERDA 'E'
#define DIREITA 'D'

using namespace decodificacao;

Decodificador::Decodificador(estruturas::ArvoreTransliteracao* arvore) {
    this->arvore = arvore;
}

Decodificador::~Decodificador() {
    delete this->arvore;
}

std::string Decodificador::decodificarMensagem(std::string mensagem) {
    std::istringstream linha(mensagem);
    std::string valor;
    
    std::string mensagemDecodificada = "";

    while (getline(linha, valor, 'x')) {
        if (valor.empty()) {
            mensagemDecodificada += this->arvore->buscarElementoPorCaminho(valor);
        } else {
            std::string descricaoCaminho = "";
            for (char caractere : valor) {
                int numero = caractere - '0';
                if (numero % 2 == 0) {
                    descricaoCaminho += DIREITA;
                } else {
                    descricaoCaminho += ESQUERDA;
                }
            }
            mensagemDecodificada += this->arvore->buscarElementoPorCaminho(descricaoCaminho);
        }
    }

    return mensagemDecodificada;
}
