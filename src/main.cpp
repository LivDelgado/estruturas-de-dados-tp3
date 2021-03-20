#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]) {
    std::system("clear");

    if (argc < 2) {
        std::cout << "Número de parâmetros insuficiente!" << std::endl;
        std::cout << "Deve ser informado o caminho do arquivo com os dados de codificação/decodificação." << std::endl;
        return 1;
    }

    std::string caminhoArquivo = argv[1];

    try {
        // chamar comunicador
    } catch (char const* excecao){
        std::cout << excecao << std::endl;
        return 0;
    }
}