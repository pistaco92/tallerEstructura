cmake_minimum_required(VERSION 3.26)
project(tallerEstructura)

set(CMAKE_CXX_STANDARD 17)

add_executable(tallerEstructura main.cpp
        LogCommand.cpp
        LogCommand.h
        ListaApp.cpp
        ListaApp.h
        Comando.cpp
        Comando.h
        App.cpp
        App.h
        AppComander.cpp
        AppComander.h
        Usuario.cpp
        Usuario.h
        ListaUsuarios.cpp
        ListaUsuarios.h
        AppAtributos.cpp
        AppAtributos.h
        Login.cpp
        Login.h
        Comandos.cpp
        EjecutarApp.h)
