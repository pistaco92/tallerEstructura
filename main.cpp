#include <iostream>
#include <valarray>
#include "ListaApp.h"
#include "Comando.h"
#include "App.h";
#include "EjecutarApp.h";
#include "Comandos.cpp";
#include "Login.h"


auto* listaApp = new ListaApp();
auto* listaUsuarios = new ListaUsuarios();

auto* login = new Login(&listaUsuarios->usuarios);


void crearAppJuegos(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;

    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);


    auto* comando = new ComandoJuegos();
    app->agregarComando(comando);

    listaApp_.vector.push_back(app);
}

void crearAppOfimaticq(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;
    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);
    auto comando = new ComandoOfimatica();
    app->agregarComando(reinterpret_cast<Comando *>(&comando));
    listaApp_.vector.push_back(app);
}

void crearAppProduccion(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;
    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);
    auto comando = new ComandoProduccion();
    app->agregarComando(reinterpret_cast<Comando *>(&comando));
    listaApp_.vector.push_back(app);
}
void crearAppNavegador(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;
    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);
    auto comando = new ComandoNavegador();
    app->agregarComando(reinterpret_cast<Comando *>(&comando));
    listaApp_.vector.push_back(app);
}
void crearAppSeguridad(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;
    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);
    auto comando = new ComandoSeguridad();
    app->agregarComando(reinterpret_cast<Comando *>(&comando));
    listaApp_.vector.push_back(app);
}
void crearAppSocial(std::string nombre, std::string dev, int edad, int precio) {
    ListaApp &listaApp_ = *listaApp;
    std::vector<std::string> usuarios;
    App* app = new App(nombre, dev, edad, usuarios, precio);
    auto comando = new ComandoSocial();
    app->agregarComando(reinterpret_cast<Comando *>(&comando));
    listaApp_.vector.push_back(app);
}

void createUser(std::string nombre, std::string contrasena, int  edad, std::string correo) {
    ListaUsuarios &listaUsuarios_ = *listaUsuarios;
    auto *usuario = new Usuario(nombre, contrasena, edad, correo);
    listaUsuarios_.agregarUsuario(usuario);
}

void createAppsAndUsers() {


    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 19, "correo");
    createUser("ignacio", "123", 10, "correo");
    createUser("ignacio", "123", 10, "correo");
    createUser("ignacio", "123", 10, "correo");
    createUser("ignacio", "123", 10, "correo");
    createUser("ignacio", "123", 10, "correo");

    crearAppJuegos("pacman", "jonn", 20, 200);
    crearAppJuegos("pacman", "jonn", 20, 200);
    crearAppJuegos("pacman", "jonn", 20, 200);
    crearAppJuegos("pacman", "jonn", 20, 200);
    crearAppJuegos("pacman", "jonn", 20, 200);

    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);
    crearAppJuegos("pacman", "jonn", 15, 200);

    crearAppOfimaticq("excel", "lenon", 23, 200);
    crearAppOfimaticq("excel", "lenon", 23, 200);
    crearAppOfimaticq("excel", "lenon", 23, 200);
    crearAppOfimaticq("excel", "lenon", 23, 200);
    crearAppOfimaticq("excel", "lenon", 23, 200);

    crearAppProduccion("imagen creator", "steve", 20, 100);
    crearAppProduccion("imagen creator", "steve", 20, 100);
    crearAppProduccion("imagen creator", "steve", 20, 100);
    crearAppProduccion("imagen creator", "steve", 20, 100);

    crearAppNavegador("edge", "jobs", 20, 1000);
    crearAppNavegador("chrome", "jobs", 20, 1000);

    crearAppSeguridad("avast", "abran", 20, 100);
    crearAppSeguridad("avast", "abran", 20, 100);
    crearAppSeguridad("avast", "abran", 20, 100);
    crearAppSeguridad("avast", "abran", 20, 100);
    crearAppSeguridad("avast", "abran", 20, 100);
    crearAppSeguridad("avast", "abran", 20, 100);

    crearAppSocial("facebok", "lincon", 20, 100);
    crearAppSocial("facebok kids", "lincon", 10 , 100);



}








void ejecutarComandoApp(std::string argumento) {
    auto data = desestructurarComando(argumento);
    ListaApp& listaApp_ = *listaApp;
    Login& login_ = *login;
    App* app = extractApp(listaApp_, data.nombreApp);
    Usuario& usuario_ = *login_.usuarioActual;

    app->ejecutarComando(data.nombreComando, usuario_);

}

void logApp(std::string basicString) {
    ListaApp &listaApp_ = *listaApp;
    App* app = extractApp(listaApp_, basicString);
    app->mostrarRegistro();
}

void lsAll() {
    for (App* app: listaApp->vector) {
            std::cout << app->obtenerNombre() << std::endl;
    }
}

void lsApp(std::string basicString) {
    ListaApp &listaApp_ = *listaApp;

    App* app = listaApp_.buscar(basicString);
    app->mostrarComandos();
}

void install(std::string basicString) {

}

void ls() {
    ListaApp &listaApp_ = *listaApp;
    Login &login_ = *login;
    for (App* app: listaApp_.vector) {
        if (app->verificarPermisos(*login_.usuarioActual)) {
            std::cout << app->obtenerNombre() << std::endl;
        }
    }
}


void comandoSelect() {

    std::string  texto;
    std::string argumento;
    std::string comando;


    std::getline(std::cin, texto);

    size_t pos = 0;

    pos = texto.find(' ');
    comando = texto.substr(0, pos);
    argumento = texto.substr(pos + 1, texto.length());



    if (comando == "ls") {
        ls();
        return;
    }
    if (comando == "log") {
        logApp(argumento);
        return;
    }
    if (comando == "ls+a") {
        lsAll();
        return;
    }
    if (comando == "ls+app") {
        lsApp(argumento);
        return;
    }

    if (comando == "help") {
        std::string manual =
                "ls"
                             ""
                             "Muestra todas las aplicaciones disponibles que es posible utilizar por el usuario actual"
                             ""
                             "ls+a"
                             "Muestra todas las aplicaciones, incluso aquellas que el usuario no tiene acceso"
                             ""
                             "log <nombreApp>"
                             ""
                             "Muestra los comandos ejecutados de la aplicacion correspondiente"
                             ""
                             "ls+app <nombreApp>"
                             "Muestra los comandos disponibles para una aplicacion determinada"
                             ""
                             "$ <NombreApp>.<Metodo>.(<Argumento>"
                             "permite ejecutar un metodo de una aplicacion en especifico"
                             "ejemplo: $ pacman.jugar(player1) "
                             ""
                             "help"
                             "muestra los comandos disponibles del sistema"
                             "";

        std::cout << manual << std::endl;
        return;
    }
    if (comando == "$") {
        ejecutarComandoApp(argumento);
        return;
    }


}

int main() {

    std::string nombre;
    std::string contrasena;

    std::cout << "Usuario: " << std::endl;
    // std::getline(std::cin, nombre);
    std::cout << "Contrasena: " << std::endl;
    // std::getline(std::cin, contrasena);

    createAppsAndUsers();

    // login->getUsuario(nombre, contrasena);
    login->getUsuario("ignacio", "123");


    std::cout << "ingrese comando: " << std::endl;

    comandoSelect();

}




