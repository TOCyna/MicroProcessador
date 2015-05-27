#include "mar.h"

MAR::MAR()
{
}

void MAR::MARupdate(long end)
{
    endereco= end;
}

long int MAR::MARreturn()
{
    return endereco;
}
