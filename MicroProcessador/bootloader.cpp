#include "bootloader.h"
#include <string>
#include <iostream>
#include <memoria.h>

using namespace std;

Loader::Loader()
{
}


void Loader::get_intrucao(string line, Memoria *elefante )
{
    char end[3], opc[5], val[2];

    int tam_end = line.copy(end,3,0);   // 000 movei 00
                                        // ^^^
    int tam_opc = line.copy(opc,5,4);   // 000 movei 00
                                        //     ^^^^^
    int tam_val = line.copy(val,2,10);  // 000 movei 00
                                       //            ^^
    end[tam_end]= '\0'; //adiciona um fim ao vetor de chars
    string endereco(end); //copia vetor de char para string
    opc[tam_opc]= '\0';
    string opcode(opc);
    val[tam_val]= '\0';
    string valor(val);

/*
    cout<<" endereco: "<< endereco;
    cout<<" opcode: "<< opcode;
    cout<<" valor: "<< valor;
    cout<<endl;
    */

    int iend = (end[2] - '0') +(end[1] - '0')*10 + (end[0] - '0')*100; //char to int
    //cout<< " ender: "<< iend<<endl<<endl;

    int ival = (val[1] - '0') + (val[0] - '0')*10; //char to int
    //cout<< " val: "<< ival<<endl<<endl;

    long int iopc;
    if(opcode=="nop  ") //comparing cha[] with opcode and returning opcode(int)
        iopc=0;
    else if(opcode=="add  ")
        iopc=1;
    else if(opcode=="sub  ")
        iopc=10;
    else if(opcode=="addi ")
        iopc=11;
    else if(opcode=="and  ")
        iopc=100;
    else if(opcode=="or   ")
        iopc=101;
    else if(opcode=="movea")
        iopc=110;
    else if(opcode=="mover")
        iopc=111;
    else if(opcode=="movei")
        iopc=1000;
    else if(opcode=="load ")
        iopc=1001;
    else if(opcode=="store")
        iopc=1010;
    else if(opcode=="goto ")
        iopc=1011;
    else
        iopc=-1;



     //cout<< " intrucao: "<< instrucao<<endl;
    // cout<< " iend: "<<iend<<" iopc: "<<iopc<<" ival: "<<iopc<<endl<<endl;
     //cout<<" ival dec: "<<ival<<endl<<endl;


     ival=ConvertToBinary(ival);
     //cout<<" ival bin: "<<ival<<endl<<endl;

      long int mem = ((iopc*100000000)+ival);
      //cout<< " mem: "<< mem<<endl;
      elefante->alocar(iend,mem);
      elefante->printline(iend);
      //cout<<"\n";


}

int Loader::ConvertToBinary(int n)
{

    int rem, i=1, binary=0;
       while (n!=0)
       {
           rem=n%2;
           n/=2;
           binary+=rem*i;
           i*=10;
       }
       return binary;

}

