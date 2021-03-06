#include "decodificacao/codificador.hpp"
#include <stdlib.h>
#include <time.h>

#define ESQUERDA 'E'
#define DIREITA 'D'

using namespace decodificacao;

Codificador::Codificador(estruturas::ArvoreTransliteracao* arvore) {
    this->arvore = arvore;
}

Codificador::~Codificador() {
    delete this->arvore;
}

std::string Codificador::codificarCaminhoCaractere(std::string caminhoCaractereNaArvore) {
    std::string caractereCodificado = "x";
    for (char caractere : caminhoCaractereNaArvore) {
        if (caractere == ESQUERDA) {
            caractereCodificado += gerarNumeroAleatorio(false);
        } else {
            caractereCodificado += gerarNumeroAleatorio(true);
        }
    }

    return caractereCodificado;
}

char Codificador::gerarNumeroAleatorio(bool par) {
    int numeroAleatorio = rand() % 10;
    int numeroAleatorioPar = numeroAleatorio - (numeroAleatorio % 2);
    int numeroAleatorioImpar = numeroAleatorioPar + 1;

    if (par)
        numeroAleatorio = numeroAleatorioPar;
    else
        numeroAleatorio = numeroAleatorioImpar;

    return numeroAleatorio + '0';
}

std::string Codificador::codificarMensagem(std::string mensagem) {
    std::string mensagemCodificada = "";

    for (char caractere : mensagem) {
        std::string caminhoCaractereNaArvore = this->arvore->buscarCaminhoElemento(caractere);
        mensagemCodificada += codificarCaminhoCaractere(caminhoCaractereNaArvore);
    }

    return mensagemCodificada;
}
