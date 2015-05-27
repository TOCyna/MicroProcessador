#ifndef PC_H
#define PC_H

class PC
{
public:
    PC();
    long int endereco;//registrador de endereco
    void PCmaismais();// contador do pc implementa-se
    void PCupdate(long int end); // recebe novo endereco. Num goto por exemplo...
    long int PCreturn(); //retorna o atual endereço do pc
};

#endif // PC_H
