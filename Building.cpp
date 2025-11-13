#include "Building.h"

Building::Building(int quantidade):quantidade(quantidade){

}

Building::~Building(){

}

int Building::setGato(int gato){
    this->gato = gato;
    return 0;
}

int Building::getGato(){
    return gato;
}