//
// Created by pistaco on 06-10-23.
//

#include <algorithm>
#include "ListaApp.h"


App * ListaApp::buscar(std::string nombreapp) {
    auto it = std::find_if(vector.begin(), vector.end(), [nombreapp](const App* app) {
        return app->obtenerNombre() == nombreapp;
    });
    return *it;

}

void ListaApp::eliminar(App *pApp) {

}
