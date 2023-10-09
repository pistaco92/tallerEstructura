//
// Created by pistaco on 06-10-23.
//

#ifndef TALLERESTRUCTURA_LISTAUSUARIOS_H
#define TALLERESTRUCTURA_LISTAUSUARIOS_H


#include "Usuario.h"

class ListaUsuarios {
public:
    std::vector<Usuario*> usuarios;
    // Agregar un usuario a la lista
    void agregarUsuario(Usuario* usuario) {
        usuarios.push_back(usuario);
    }

    // Buscar un usuario por nombre de usuario
    Usuario* buscarUsuario(const std::string& nombreUsuario) {
        for (Usuario* usuario : usuarios) {
            if (usuario->obtenerNombre() == nombreUsuario) {
                return usuario;
            }
        }
        return nullptr; // Usuario no encontrado
    }

    // Mostrar información de todos los usuarios en la lista
    void mostrarUsuarios() const {
        std::cout << "Lista de Usuarios:" << std::endl;
        for (Usuario* usuario : usuarios) {
            usuario->mostrarInformacion();
            std::cout << std::endl;
        }
    }

};

#endif //TALLERESTRUCTURA_LISTAUSUARIOS_H
