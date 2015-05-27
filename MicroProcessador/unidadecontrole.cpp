#include "unidadecontrole.h"
#include <iostream>
#include "pc.h"
#include "mar.h"
#include "memoria.h"
#include "ir.h"

using namespace std;

UnidadeControle::UnidadeControle(Memoria *elefante)
{
    PC pc;
    MAR mar;
    IR ir;

    mar.MARupdate(pc.PCreturn());
    ir.IRgetintrucao(mar.MARreturn(), &elefante);

}
