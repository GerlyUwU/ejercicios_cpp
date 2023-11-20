#include "Evento.h"

Evento::Evento(const std::string &
                   nombreEvento,
               const std::string &
                   fechaEvento,
               const std::string &
                   horaEvento)
    : nombreEvento(nombreEvento),
      fechaEvento(fechaEvento),
      horaEvento(horaEvento) {}

std::string Evento::getnombreEvento()
    const
{
    return nombreEvento;
}

std::string Evento::getfechaEvento()
    const
{
    return fechaEvento;
}

std::string Evento::gethoraEvento()
    const
{
    return horaEvento;
}
