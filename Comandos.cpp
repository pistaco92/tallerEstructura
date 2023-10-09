//
// Created by pistaco on 06-10-23.
//
#include <iostream>
#include "Comando.h"

// Interfaz base Command
class Command: public Comando {
public:
    Command(const std::string &nombre) : Comando(nombre) {

    }

    virtual void ejecutar() = 0;
};

// Clase concreta para el comando de Juegos
class ComandoJuegos : public Command {
public:
    ComandoJuegos(): Command("jugar") {} void ejecutar() override {
        std::cout << "Iniciando un juego..." << std::endl;
        // Implementa la lógica real para iniciar un juego aquí
    }
};

// Clase concreta para el comando de Ofimática
class ComandoOfimatica : public Command {
public:
    ComandoOfimatica(): Command("ver datos") {}

    void ejecutar() override {
        std::cout << "Creando un nuevo documento..." << std::endl;
        // Implementa la lógica real para crear un documento aquí
    }
};

// Clase concreta para el comando de Producción
class ComandoProduccion : public Command {
public:
    ComandoProduccion(): Command("cambiar medio") {}

    void ejecutar() override {
        std::cout << "Generando un informe de producción..." << std::endl;
        // Implementa la lógica real para generar un informe de producción aquí
    }
};

// Clase concreta para el comando de Navegador
class ComandoNavegador : public Command {
public:
    ComandoNavegador(): Command("ver ultimas 10 paginas") {}

    void ejecutar() override {
        std::cout << "Abriendo una página web..." << std::endl;
        // Implementa la lógica real para abrir una página web aquí
    }
};

// Clase concreta para el comando de Seguridad
class ComandoSeguridad : public Command {
public:
    ComandoSeguridad(): Command("ver virus") {}

    void ejecutar() override {
        std::cout << "Escaneando en busca de malware..." << std::endl;
        // Implementa la lógica real para escanear en busca de malware aquí
    }
};

// Clase concreta para el comando de Social
class ComandoSocial : public Command {
public:
    ComandoSocial(): Command("ver lista de amigos") {}

    void ejecutar() override {
        std::cout << "Enviando un mensaje a un contacto en la red social..." << std::endl;
        // Implementa la lógica real para enviar un mensaje en la red social aquí
    }
};

