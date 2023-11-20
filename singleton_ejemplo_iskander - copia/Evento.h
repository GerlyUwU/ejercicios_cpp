#ifndef EVENTO_H
#define EVENTO_H

#include <string>

class Evento {
private:
    std::string nombreEvento;
    std::string fechaEvento;
    std::string horaEvento;

public:
    Evento(const std::string& nombreEvento, const std::string& fechaEvento, const std::string& horaEvento);
    std::string getNombreEvento() const;
    void setNombreEvento(const std::string& nombreEvento);
    std::string getFechaEvento() const;
    void setFechaEvento(const std::string& fechaEvento);
    std::string getHoraEvento() const;
    void setHoraEvento(const std::string& horaEvento);
};

#endif
