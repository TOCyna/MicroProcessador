#ifndef MEMORIA_H
#define MEMORIA_H

class Memoria
{
public:
    Memoria();
    long int alocacao[256][1];
    int acessar (int end); //retorna o valor  naquele endereco
    void alocar(int end, long int val); // aloca uma valor no endereco da memoria
    void print(); //imprimi toda memoria
    void printline(int end);//imprime determinado endereco da memoria
};

#endif // MEMORIA_H
