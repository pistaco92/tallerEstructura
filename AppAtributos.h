//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_APPATRIBUTOS_H
#define TALLERESTRUCTURA_APPATRIBUTOS_H


#include <iostream>
#include <string>
#include <utility>
#include <vector>

class AppAtributos {
public:
    // Constructor para inicializar los atributos
    AppAtributos(std::string  nombre, std::string  developer, int edad, std::vector<std::string> usuarios, double precio)
            : nombre(std::move(nombre)), developer(std::move(developer)), edad(edad), listaUsuarios(std::move(usuarios)),precio(precio) {}


    // Métodos para acceder a los atributos
    std::string obtenerNombre() const {
        return nombre;
    }

    std::string obtenerDeveloper() const {
        return developer;
    }

    int obtenerEdad() const {
        return edad;
    }

    std::vector<std::string> obtenerListaUsuarios() const {
        return listaUsuarios;
    }

    double obtenerPrecio() const {
        return precio;
    }

    // Métodos para modificar los atributos
    void establecerNombre(const std::string& nuevoNombre) {
        nombre = nuevoNombre;
    }

    void establecerDeveloper(const std::string& nuevoDeveloper) {
        developer = nuevoDeveloper;
    }

    void establecerEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    void establecerListaUsuarios(const std::vector<std::string>& nuevaListaUsuarios) {
        listaUsuarios = nuevaListaUsuarios;
    }

    void establecerPrecio(double nuevoPrecio) {
        precio = nuevoPrecio;
    }

    // Método para mostrar información sobre la instancia de la clase
    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Developer: " << developer << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Lista de Usuarios: ";
        for (const std::string& usuario : listaUsuarios) {
            std::cout << usuario << " ";
        }
        std::cout << std::endl;
        std::cout << "Precio: $" << precio << std::endl;
    }

private:
    std::string nombre;
    std::string developer;
    int edad;
    std::vector<std::string> listaUsuarios;
    double precio;


    void lsComandos();
};

#endif //TALLERESTRUCTURA_APPATRIBUTOS_H
