#include "Evento.h"

Evento::Evento(const std::string& nombreEvento, const std::string& fechaEvento, const std::string& horaEvento)
    : nombreEvento(nombreEvento), fechaEvento(fechaEvento), horaEvento(horaEvento) {}

std::string Evento::getNombreEvento() const {
    return nombreEvento;
}

void Evento::setNombreEvento(const std::string& nombreEvento) {
    this->nombreEvento = nombreEvento;
}

std::string Evento::getFechaEvento() const {
    return fechaEvento;
}

void Evento::setFechaEvento(const std::string& fechaEvento) {
    this->fechaEvento = fechaEvento;
}

std::string Evento::getHoraEvento() const {
    return horaEvento;
}

void Evento::setHoraEvento(const std::string& horaEvento) {
    this->horaEvento = horaEvento;
}
