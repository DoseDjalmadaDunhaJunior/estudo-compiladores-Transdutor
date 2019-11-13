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
private:
    int po = 0;
    char txt[200];

    struct variavel{
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
