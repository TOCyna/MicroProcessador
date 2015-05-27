#include "pc.h"

PC::PC()
{
    endereco=0;
}

void PC::PCmaismais()
{
    endereco++;
}


void PC::PCupdate(long int end)
{
    endereco=end;
}

long PC::PCreturn()
{
    return endereco;
}


