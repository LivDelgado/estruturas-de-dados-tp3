#include <cstdlib>
#include <iostream>

#include "comunicacao/comunicador.hpp"

int main(int argc, char* argv[]) {
    std::system("clear");

    if (argc < 2) {
        std::cout << "Número de parâmetros insuficiente!" << std::endl;
        std::cout << "Deve ser informado o caminho do arquivo com os dados de codificação/decodificação." << std::endl;
        return 1;
    }

    std::string caminhoArquivo = argv[1];

    try {
        comunicacao::Comunicador* comunicador = new comunicacao::Comunicador();
        comunicador->estabelecerComunicacaoEntreNaveECentral(caminhoArquivo);
    } catch (char const* excecao){
        std::cout << excecao << std::endl;
        return 0;
    }
}