//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_LOGIN_H
#define TALLERESTRUCTURA_LOGIN_H


#include <utility>

#include "Usuario.h"
#include "ListaUsuarios.h"

class Login {
public:
    // Constructor que recibe un array de usuarios
    Usuario* usuarioActual;

    Login(std::vector<Usuario*> *usuarios)
            : usuarios(std::move(usuarios)) {}

    // Método para obtener un usuario por nombre y contraseña
    [[nodiscard]] Usuario * getUsuario(const std::string& nombre, const std::string& contrasena) {
        for (Usuario* usuario : *usuarios) {
            if (usuario->obtenerNombre()== nombre && usuario->obtenerContrasena() == contrasena) {
                usuarioActual = &(*usuario);
                return usuario;
            }
        }
        return nullptr; // Usuario no encontrado
    }

private:
    std::vector<Usuario*> *usuarios;
};


#endif //TALLERESTRUCTURA_LOGIN_H
