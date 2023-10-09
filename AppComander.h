//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_APPCOMANDER_H
#define TALLERESTRUCTURA_APPCOMANDER_H


#include <iostream>
#include <utility>
#include <vector>
#include "Comando.h"
#include "Usuario.h"
#include "AppAtributos.h"

class AppCommander : public AppAtributos{

public:
    AppCommander(const std::string& nombre, const std::string& dev, int i, std::vector<std::string> usuarios, int precio) :
    AppAtributos(nombre, dev, i, std::move(usuarios), precio) {}



// Agregar un comando al vector de comandos
    void agregarComando(Comando *comando) {
        comandos.push_back(comando);
    }

    bool verificarPermisos(const Usuario& usuario) {
        if (obtenerEdad() > 18 && usuario.obtenerEdad() < 18) {
            return false;
        }
        return true;
    }


// Ejecutar un comando por nombre y registrar en el log
    void ejecutarComando(const std::string& nombreComando, const Usuario& usuario) {
        for (Comando* comando : comandos) {
            if (comando->obtenerNombre() == nombreComando) {
                if (verificarPermisos(usuario)) {
                    comando->ejecutar();
                }
                log.push_back("Comando ejecutado: " + nombreComando);
                return; // Salir del bucle después de ejecutar el comando
            }
        }


        std::cout << "Comando '" << nombreComando << "' no encontrado." << std::endl;
    }

    void mostrarComandos() {
        for (Comando* comando: comandos) {
            std::cout << comando->obtenerNombre();
        }

    }

    // Mostrar el registro de comandos ejecutados
    void mostrarRegistro() const {
        std::cout << "Registro de comandos ejecutados:" << std::endl;
        for (const std::string& entrada : log) {
            std::cout << entrada << std::endl;
        }
    }


private:
    std::vector<Comando*> comandos;
    std::vector<std::string> log;
};

#endif //TALLERESTRUCTURA_APPCOMANDER_H
