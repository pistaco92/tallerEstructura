//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_USUARIO_H
#define TALLERESTRUCTURA_USUARIO_H

#include <iostream>
#include <vector>
#include <string>

class Usuario {
public:
    Usuario(const std::string& nombre, const std::string& contrasena, int edad, const std::string& correo)
            : nombre(nombre), contrasena(contrasena), edad(edad), correo(correo) {}

    // Métodos para acceder a los atributos
    std::string obtenerNombre() const {
        return nombre;
    }

    std::string obtenerContrasena() const {
        return contrasena;
    }

    int obtenerEdad() const {
        return edad;
    }

    std::string obtenerCorreo() const {
        return correo;
    }

    // Método para mostrar información sobre el usuario
    void mostrarInformacion() const {
        std::cout << "Nombre de Usuario: " << nombre << std::endl;
        std::cout << "Contraseña: " << contrasena << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Correo Electrónico: " << correo << std::endl;
    }

    bool pedirPermiso() {
            std::string respuesta;
            std::cout << "senor " + nombre + ", " + "¿Otorga permiso? (escriba 'yes' para sí): ";
            std::cin >> respuesta;
            return (respuesta == "yes");
    }



private:
    std::string nombre;
    std::string contrasena;
    int edad;
    std::string correo;
};

#endif //TALLERESTRUCTURA_USUARIO_H
