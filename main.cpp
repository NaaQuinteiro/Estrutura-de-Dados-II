#include <iostream>

using namespace std;

class Aviao{
    public: 
        int velocidade = 0;
        int velocidadeMaxima;
        string tipo;
};

int main() {
    
    //Para instanciar o objeto temos que criar um ponteiro que aponta para o espaço na memória 
    // onde está alocado o objeto, e para isso usamos o operador new.
    Aviao *av1 = new Aviao();

    cout << av1->velocidade << endl;

    return 0;
}