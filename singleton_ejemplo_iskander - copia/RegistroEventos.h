#ifndef REGISTROEVENTOS_H
#define REGISTROEVENTOS_H

#include <vector>
#include "Evento.h"

class RegistroEventos {
private:
    static RegistroEventos* instanciaRegistroEventos;
    std::vector<Evento> listaEventos;

    RegistroEventos();

public:
    static RegistroEventos* obtenerInstancia();
    void registrarEvento(const Evento& nuevoEvento);
    void mostrarEventos() const;
};

#endif
