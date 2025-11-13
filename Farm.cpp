#include "Farm.h"

Farm::Farm():Building(quantidade){

}

Farm::~Farm(){

}

int Farm::Building::setUpgrade(int upgrade){
    if (upgrade > 0) this->upgrade = upgrade*2;
}