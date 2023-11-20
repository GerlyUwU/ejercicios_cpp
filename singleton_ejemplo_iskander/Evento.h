#ifndef EVENTO_H
#define EVENTO_H

#include <String>

class Evento
{
private:
    std::string nombreEvento;
    std::string fechaEvento;
    std::string horaEvento;

public:
    Evento(const std::string &nombreEvento,
           const std::string &fechaEvento, const std::string &horaEvento);

    std::string getnombreEvento() const;
    std::string getfechaEvento() const;
    std::string gethoraEvento() const;
};


#endif