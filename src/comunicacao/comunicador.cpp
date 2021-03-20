#include "comunicacao/comunicador.hpp"

using namespace comunicacao;

Comunicador::Comunicador() {
    this->leitor = new leitura::LeitorArquivos();
    this->conversor = new conversao::Conversor();
    this->executor = new Executor();
}

Comunicador::~Comunicador() {
    delete this->leitor;
    delete this->conversor;
    delete this->executor;
}

void Comunicador::estabelecerComunicacaoEntreNaveECentral(std::string caminhoArquivo) {
    std::string* linhasArquivo = this->leitor->lerArquivo(caminhoArquivo);
    Comando* comandos = this->conversor->converterStringsEmComandos(linhasArquivo, this->leitor->getNumeroLinhasArquivo());
    this->executor->executarComandos(comandos, this->leitor->getNumeroLinhasArquivo());
}
