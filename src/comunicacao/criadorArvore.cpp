#include "comunicacao/criadorArvore.hpp"

using namespace comunicacao;

CriadorArvore::CriadorArvore() {
    this->arvore = new estruturas::ArvoreTransliteracao();
}

CriadorArvore::~CriadorArvore() {
    delete this->arvore;
}

void CriadorArvore::criarArvore(std::string descricaoArvore) {
    for (char caractere : descricaoArvore) {
        this->arvore->inserirElemento(caractere);
    }
}

estruturas::ArvoreTransliteracao* CriadorArvore::getArvore() {
    return this->arvore;
}
