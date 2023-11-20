#include "RegistroEventos.h"
#include <iostream>

RegistroEventos *RegistroEventos::instanciaRegistroEventos = nullptr;

RegistroEventos::RegistroEventos() {}

RegistroEventos *RegistroEventos::obtenerInstncia()
{
    if (instanciaRegistroEventos == nullptr)
    {
        instanciaRegistroEventos = new RegistroEventos();
    }
    return instanciaRegistroEventos;
}

void RegistroEventos::registrarEvento(const Evento &nuevoEvento)
{
    listaEventos.push_back(nuevoEvento);
}

void RegistroEventos::mostrarEventos() const
{
    std::cout << "eventos registrados" << std::endl;
    if (listaEventos.empty())
    {
        std::cout << "no existen eventos registrados " << std::endl;
    }
    else
    {
        int i = 0;
        for (const Evento &nuevoEvento : listaEventos)
        {
            /* code */
            std::cout << i + 1 << ".- " << nuevoEvento.getnombreEvento() << std::endl;
            std::cout << nuevoEvento.getfechaEvento() << " " << nuevoEvento.gethoraEvento()
                      << std::endl;
        }
    }
}
