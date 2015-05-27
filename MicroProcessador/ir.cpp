#include "ir.h"
#include <iostream>
#include "memoria.h"
using namespace std;

IR::IR()
{
}

void IR::IRgetintrucao(long end, Memoria **elefante )//deveria*** receber a memoria que veio da unidade de controle
{
    instrucao=elefante->acessar(end); // problemas com o endereçamento a memoria elefante

}

long IR::IRreturn()
{

}


