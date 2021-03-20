#include "conversao/conversor.hpp"
#include <sstream>

using namespace conversao;

Conversor::Conversor() {}

Conversor::~Conversor() {}

comunicacao::Comando* Conversor::converterStringsEmComandos(std::string* textoAConverter, int numeroLinhas) {
    if (numeroLinhas <= 0) {
        throw "Não há nenhum comando a ser executado!";
    }

    comunicacao::Comando* comandos = new comunicacao::Comando[numeroLinhas];

    for (int comandoAtual = 0; comandoAtual < numeroLinhas; comandoAtual++){
        comandos[comandoAtual] = *(this->converterStringEmComando(textoAConverter[comandoAtual]));
    }

    return comandos;
}

comunicacao::Comando* Conversor::converterStringEmComando(std::string stringAConverter) {
    std::istringstream linha(stringAConverter);
    std::string valor;

    char tipoComando;
    std::string descricaoComando;

    int contadorColunas = 0;

    while (getline(linha, valor, ' ')) {
        if (valor.empty()) {
            break;
        }

        if (contadorColunas == 0) {
            tipoComando = valor[0];
        } else if (contadorColunas == 1) {
            descricaoComando = valor;
        } else {
            break;
        }

        contadorColunas++;
    }

    return new comunicacao::Comando(tipoComando, descricaoComando);
}
