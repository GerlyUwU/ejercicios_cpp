#ifndef REGISTROEVENTOS_H
#define REGISTROEVENTOS_H

#include "Evento.h"
#include <vector>

class RegistroEventos
{
private:
    static RegistroEventos *instanciaRegistroEventos;
    std::vector<Evento> listaEventos;
    RegistroEventos();

public:
    static 
    RegistroEventos*obtenerInstncia();
    void registrarEvento(const Evento &
                             nuevoEvento);
    void mostrarEventos() const;
};

#endif