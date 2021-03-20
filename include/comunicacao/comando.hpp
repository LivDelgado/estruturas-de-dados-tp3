#ifndef COMANDO
#define COMANDO

#include <string>

namespace comunicacao {
    class Comando {
        private:
            char tipoComando;
            std::string descricaoComando;
        public:
            Comando();
            Comando(char tipoComando, std::string descricaoComando);
            ~Comando();
            
            std::string getDescricaoComando();
            char getTipoComando();
    };
}

#endif
