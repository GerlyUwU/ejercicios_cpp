#include "RegistroEventos.h"
#include <iostream>

RegistroEventos *RegistroEventos::instanciaRegistroEventos = nullptr;

RegistroEventos::RegistroEventos() {}

RegistroEventos *RegistroEventos::obtenerInstancia()
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
    std::cout << "Eventos registrados:" << std::endl;
    if (listaEventos.empty())
    {
        std::cout << "No existen eventos registrados" << std::endl;
    }
    else
    {
        int i = 0;
        for (const Evento &nuevoEvento : listaEventos)
        {
            std::cout << i + 1 << ".- " << nuevoEvento.getNombreEvento() << std::endl;
            std::cout << nuevoEvento.getFechaEvento() << " " << nuevoEvento.getHoraEvento() << std::endl;
            i++;
        }
    }
}
