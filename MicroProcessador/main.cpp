/*======Simulador de Micro-Processador 8  Bits======
 * UFRN 2015.1
 * Trabalho de Arquitetura de computadores
 * Professor Dr. Diego Pedrosa
 * Culpados:
 * Álvaro Negreiros
 * Hanoch Griner
 * Taynara Pinheiro
 */
#include <iostream>
#include <fstream>
#include <string>
#include <bootloader.h>
#include <memoria.h>
#include <unidadecontrole.h>

using namespace std;

int main()
{
    string line;
    Memoria elefante; // o elefante nunca esquece
    const char* endereco = "/home/alvaro/Documentos/MicroProcessador/MicroProcessador/assembly.txt";

    cout << "======Iniciando Simulador de Micro-Processador======" << endl;
    cout << "\n Carregando arquivo assembly [.       ]";
    cout << "\n Carregando arquivo assembly [..      ]";
    cout << "\n Carregando arquivo assembly [...     ]";
    cout << "\n Carregando arquivo assembly [....    ]";
    cout << "\n Carregando arquivo assembly [.....   ]";
    cout << "\n Carregando arquivo assembly [......  ]";
    cout << "\n Carregando arquivo assembly [....... ]";
    cout << "\n Carregando arquivo assembly [........] \n" << endl;

    ifstream aux (endereco); //carregando txt em aux

    while(!aux.eof()){ // itera linha por linha o txt
        Loader bootloader ;
        getline(aux,line); //pega uma linha de aux e coloca em line
        if (!line.empty()){
            //cout<<"\n line: "<<line<<endl;
            bootloader.get_intrucao(line, &elefante); // armazena a instrucao na memoria
        }
    }

    //elefante.print();

    UnidadeControle unidade_controle(&elefante); // inicia a unidade de controle com a memoria vinda do bootloader


/*
   int c= 42;
   int *la;
   int **lala;
   la=&c;
   lala=&la;
   cout<< lala<<endl;
*/









    return 0;
}

