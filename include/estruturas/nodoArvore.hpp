// escrever método de "eh espaco" -> comparar com valor ascii
// o restante pode ser utilizado por comparação do valor int do char mesmo

#ifndef NODO_ARVORE
#define NODO_ARVORE

namespace estruturas {
    class NodoArvore {
        private:
            char item;
        public:
            NodoArvore();
            ~NodoArvore();

            NodoArvore* nodoEsquerdo;
            NodoArvore* nodoDireito;

            void setItem(char item);
            char getItem();
            bool itemEhEspaco();
            int getItemInteiro();
    };
}

#endif
