//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_LISTAAPP_H
#define TALLERESTRUCTURA_LISTAAPP_H


#include "App.h"

class ListaApp {

public:
    std::vector<App*> vector;
    void print();

    void eliminar(App *pApp);

    App * buscar(std::string basicString);
};


#endif //TALLERESTRUCTURA_LISTAAPP_H
