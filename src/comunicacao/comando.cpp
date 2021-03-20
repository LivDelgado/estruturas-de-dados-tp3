#include "comunicacao/comando.hpp"

using namespace comunicacao;

Comando::Comando() {}

Comando::Comando(char tipoComando, std::string descricaoComando) {
    this->tipoComando = tipoComando;
    this->descricaoComando = descricaoComando;
}

Comando::~Comando() {
    this->descricaoComando = nullptr;
}

std::string Comando::getDescricaoComando() {
    return this->descricaoComando;
}

char Comando::getTipoComando() {
    return this->tipoComando;
}

