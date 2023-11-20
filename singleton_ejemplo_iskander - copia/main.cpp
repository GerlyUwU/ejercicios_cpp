 #include "RegistroEventos.h"

int main() {
    RegistroEventos* nuevaAgenda = RegistroEventos::obtenerInstancia();
    Evento eventoUno("Fiesta Factory", "10/08/2023", "13:00");
    Evento eventoDos("Conferencia", "12/08/2023", "17:30");
    nuevaAgenda->mostrarEventos();
    nuevaAgenda->registrarEvento(eventoUno);
    nuevaAgenda->registrarEvento(eventoDos);
    nuevaAgenda->mostrarEventos();

    return 0;
}