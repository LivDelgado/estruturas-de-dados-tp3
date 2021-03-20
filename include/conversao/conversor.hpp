#ifndef CONVERSOR
#define CONVERSOR

#include "enums/tipoComando.hpp"
#include "comunicacao/comando.hpp"

namespace conversao {
    class Conversor {
        private:
            enums::TipoComando converterCharParaTipoComando(char tipoComandoChar);
            comunicacao::Comando* converterStringEmComando(std::string stringAConverter);

        public:
            Conversor();
            ~Conversor();

            comunicacao::Comando* converterStringsEmComandos(std::string* textoAConverter, int numeroLinhas);
    };
}

#endif
