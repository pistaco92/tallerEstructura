//
// Created by pistaco on 08-10-23.
//
#include <iostream>
#include <string>
#include "ListaApp.h"

struct ComandoDesestructurado {
    std::string nombreApp;
    std::string nombreComando;
    std::string argumento;
};

ComandoDesestructurado desestructurarComando(const std::string& texto) {
    ComandoDesestructurado resultado;

    // Buscar el índice del primer punto (.)
    size_t indicePunto = texto.find('.');

    if (indicePunto != std::string::npos) {
        // Extraer el nombre de la aplicación antes del punto
        resultado.nombreApp = texto.substr(0, indicePunto);

        // Buscar el índice del primer paréntesis abierto (
        size_t indiceParentesisAbierto = texto.find('(', indicePunto);

        if (indiceParentesisAbierto != std::string::npos) {
            // Extraer el nombre del comando entre el punto y el paréntesis abierto
            resultado.nombreComando = texto.substr(indicePunto + 1, indiceParentesisAbierto - indicePunto - 1);

            // Buscar el índice del primer paréntesis cerrado )
            size_t indiceParentesisCerrado = texto.find(')', indiceParentesisAbierto);

            if (indiceParentesisCerrado != std::string::npos) {
                // Extraer el argumento entre los paréntesis
                resultado.argumento = texto.substr(indiceParentesisAbierto + 1, indiceParentesisCerrado - indiceParentesisAbierto - 1);
            }
        }
    }

    return resultado;
}


App* extractApp(ListaApp& listaApp, std::string nombre) {
    for (App* app: listaApp.vector) {
        if (nombre == app->obtenerNombre()) {
            return app;
        }
    }
};


