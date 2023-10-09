//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_APP_H
#define TALLERESTRUCTURA_APP_H


#include <utility>

#include "ListaUsuarios.h"
#include "AppComander.h"

class App: public AppCommander {

public:

    App(const std::string& nombre, const std::string& developer, int edad, std::vector<std::string> usuarios , double precio)
            : AppCommander(nombre, developer, edad, std::move(usuarios), precio) {}




    bool eliminada{};

    void logPrint() {
    }

    void lsComandos();
};


#endif //TALLERESTRUCTURA_APP_H
