#ifndef BUILDING_H
#include <iostream>
#include <string>
using namespace std;

class Building{
private:
    static float gato;
    static float cookies;
protected:
    string nome;
    int quantidade;
    int preço;
    int upgrade;
public:
    Building(int quantidade);
    virtual ~Building();
    int setGato(int gato);
    int getGato();
    int setUpgrade(int upgrade);
};



#endif