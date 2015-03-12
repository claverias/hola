#include <iostream>
#include "bloqueLed.h"

using namespace std;

typedef unsigned char bloqueLed;

int main(){
    bloqueLed b=0;
    unsigned char mask = 1<<5;
    if(b && mask == 0)
        cout << "apagado";
    else
        cout << "encendido";

}
