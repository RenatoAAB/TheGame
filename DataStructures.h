#ifndef DATASTRUCTURES_H_INCLUDED
#define DATASTRUCTURES_H_INCLUDED
#include<stdlib.h>
#include<stdio.h>

class pilha{
    private:
        int cartas[98];
        int index = 0;

    public:
        void initialize (int seed){
            int j, aux;
            for(int i = 0; i < 98; i++)
                cartas[i] = i + 2;
            srand(seed);
            for(int i = 0; i < 98; i++){
                j = rand()%(98 - i) + i;
                aux = cartas[i];
                cartas[i] = cartas[j];
                cartas[j] = aux;
            }
        }
        int getIndex(){
            return index;
        }
        int getCarta(){
            index = index + 1;
            return cartas[index - 1];
        }
};

class mao{

    private:
        int cartas[8];

    public:
        void init (){
            for(int i = 0; i < 8; i++)
                cartas[i] = 0;
        }
        void printMao(){
            for(int i = 0; i < 8; i++)
                cout << cartas[i] << " ";
            cout << "\n";
        }

        void preencherMao (pilha p){
            for(i = 0; i < 8; i++)
                if(cartas[i] == 0)
                    if(p.getIndex() < 98)
                        cartas[i] = p.getCarta();
        }

};


#endif // DATASTRUCTURES_H_INCLUDED
