#ifndef COMANDO
#define COMANDO

#include "enums/tipoComando.hpp"
#include <string>

namespace comunicacao {
    class Comando {
        private:
            enums::TipoComando tipoComando;
            std::string descricaoComando;
        public:
            Comando(enums::TipoComando tipoComando, std::string descricaoComando);
            ~Comando();
            
            std::string getDescricaoComando();
            enums::TipoComando getTipoComando();
    };
}

#endif
