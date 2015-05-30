#ifndef IR_H
#define IR_H
#include <iostream>
#include "memoria.h"

using namespace std;


class IR
{
public:
    IR();
    long int instrucao; // registrador do opcode
    void IRgetintrucao(long int end, Memoria *elefante); //busca opcode no endereço
    long int IRreturn();    //retorna opcode no registrador

};

#endif // IR_H
