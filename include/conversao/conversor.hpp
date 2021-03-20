#ifndef CONVERSOR
#define CONVERSOR

#include "comunicacao/comando.hpp"

namespace conversao {
    class Conversor {
        private:
            comunicacao::Comando* converterStringEmComando(std::string stringAConverter);

        public:
            Conversor();
            ~Conversor();

            comunicacao::Comando* converterStringsEmComandos(std::string* textoAConverter, int numeroLinhas);
    };
}

#endif
