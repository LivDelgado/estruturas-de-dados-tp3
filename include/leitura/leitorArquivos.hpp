#include <string>

#ifndef LEITOR
#define LEITOR

namespace leitura {
    class LeitorArquivos {
        private:
            int numeroLinhas;

            void contarNumeroLinhas(std::string caminhoArquivo);
        public:
            LeitorArquivos();
            ~LeitorArquivos();

            std::string* lerArquivo(std::string caminhoArquivo);
            int getNumeroLinhasArquivo();
    };
}


#endif
