#ifndef MAR_H
#define MAR_H

class MAR
{
public:
    MAR();
    long int endereco;//registrador de endereco da memoria
    void MARupdate(long int end); //recebe novo endereco da memoria
    long int MARreturn(); //retorna endereco do registrador
};

#endif // MAR_H
