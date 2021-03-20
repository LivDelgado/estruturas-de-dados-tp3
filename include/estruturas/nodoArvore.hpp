// escrever método de "eh espaco" -> comparar com valor ascii
// o restante pode ser utilizado por comparação do valor int do char mesmo

#ifndef NODO_ARVORE
#define NODO_ARVORE

namespace estruturas {
    class NodoArvore {
        private:
            char item;
            NodoArvore* nodoEsquerdo;
            NodoArvore* nodoDireito;

        public:
            NodoArvore();
            ~NodoArvore();

            void setItem(char item);
            void setNodoEsquerdo(NodoArvore* nodo);
            void setNodoDireito(NodoArvore* nodo);

            char getItem();
            NodoArvore* getNodoEsquerdo();
            NodoArvore* getNodoDireito();

            bool itemEhEspaco();
            int getItemInteiro();
    };
}

#endif
