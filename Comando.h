//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_COMANDO_H
#define TALLERESTRUCTURA_COMANDO_H


#include <string>
#include <utility>

class Comando {
public:
    Comando(std::string  nombre) : nombre(std::move(nombre)) {}

    virtual void ejecutar() = 0;

    std::string obtenerNombre() const {
        return nombre;
    }

private:
    std::string nombre;
};


#endif //TALLERESTRUCTURA_COMANDO_H
