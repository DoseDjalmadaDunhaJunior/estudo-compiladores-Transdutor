//
// Created by djalma on 11/11/2019.
//

#ifndef TRANSDUTOR_TRANSDUTOR_H
#define TRANSDUTOR_TRANSDUTOR_H
#include <iostream>
using namespace std;

class Transdutor {
public:
    Transdutor(char* texto){
        int i;
        for (i = 0; texto[i] != 0 ; i++) {
            txt[i] = texto[i];
        }
        txt[i] = 0;
    }

    void e0(){
        if(txt[po] == 0){
            imprime();
        }
        else if(8){

        }
    }
private:
    int po = 0;
    char* txt;
    struct variavel{
        int num;
        string nome;
    };
    typedef struct variavel variavel;
    variavel vetor[200];

    void imprime(){

    }

    void rejeita(){

    }
};


#endif //TRANSDUTOR_TRANSDUTOR_H
