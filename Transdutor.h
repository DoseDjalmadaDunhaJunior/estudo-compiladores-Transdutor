//
// Created by djalma on 11/11/2019.
//

#ifndef TRANSDUTOR_TRANSDUTOR_H
#define TRANSDUTOR_TRANSDUTOR_H

#include "StringChar.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

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
        if((txt[po] >= '0' && txt[po] <= '9') || (txt[po] >= 'a' && txt[po] <= 'z') ||
           (txt[po] >= 'A' && txt[po] <= 'Z')){
            po++;
            e1();
        }
        else if(txt[po] == ' '){
            po++;
            e1();
        }
        else if(txt[po] == 0){
            imprime();
        }
        else{
            rejeita();
        }
    }

    void ordenado(){
        int i = 0, c = 0;
        StringChar ola;
        char temporario[200];
        for (i = 0; txt[i] != 0 ; i++) {
            if(txt[i] == ' '){
                pegaParcela(temporario);
                bool ok = false;
                for (int j = 0; j < qvar; j++) {
                    if((strcmp(temporario,ola.converte(vetor[j]))) == 0){
                        puts("repete");
                    }
                }
            }
        }
    }

private:
    int po = 0, qvar = 0;
    char txt[200];

    struct variavel : public basic_string<char> {
        int num;
        string nome;
    };

    typedef struct variavel variavel;

    variavel vetor[200];

    void pegaParcela(char* parcela) {
        if (txt[po] == 0) {
            puts("acabou");
        } else {
            if (txt[po] == ' ') {
                po++;
            }
            int i = 0;
            for (i = 0; (txt[i + po] != ' ') || (txt[i + po] != 0); i++) {
                parcela[i] = txt[po + i];
            }
            parcela[i] = 0;
        }
    }

    void e1(){
        if((txt[po] >= '0' && txt[po] <= '9') || (txt[po] >= 'a' && txt[po] <= 'z') ||
                (txt[po] >= 'A' && txt[po] <= 'Z')){
            po++;
            e0();
        }
        else if(txt[po] == ' '){
            po++;
            e0();
        }
        else if(txt[po] == 0){
            e0();
        }
        else{
            rejeita();
        }
    }

    void imprime(){
        cout<<"aceita"<<endl;
    }

    void rejeita(){
        cerr<<"rejeita"<<endl;
    }
};


#endif //TRANSDUTOR_TRANSDUTOR_H
