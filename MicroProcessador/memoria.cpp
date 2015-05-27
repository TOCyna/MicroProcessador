#include "memoria.h"
#include <iostream>

using namespace std;

Memoria::Memoria()
{
    for(int i=0; i<=256; i++){ //criando memoria de 8 bits (255)
       alocacao[i][1]=-1; // "vazio"
       //cout<< "alocacao["<< i<<"]["<< alocacao[i][0]<<"]"<<endl;
    }
}

int Memoria::acessar(int end)
{
    return alocacao[end][1];
}

void Memoria::alocar(int end, long int val)
{
    alocacao[end][1]= val;
}

void Memoria::print()
{
    for(int i=0; i<=256; i++){ //criando memoria de 8 bits (255)
       cout<< "alocacao["<< i<<"]["<< alocacao[i][1]<<"]"<<endl;
    }
}

void Memoria::printline(int end)
{
    cout<< "alocacao["<< end<<"]["<< alocacao[end][1]<<"]"<<endl;
}


