#ifndef DECODER_H
#define DECODER_H
#include <string>
#include <iostream>
#include <memoria.h>

using namespace std;

class Loader
{
public:
    Loader();
    void get_intrucao(string line, Memoria *elefante); //carrega as instrucoes do assembly na memoria
};

#endif // LOADER_H
