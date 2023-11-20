#include "RegistroEventos.h"

int main(){
RegistroEventos*nuevaAgenda = RegistroEventos::obtenerInstncia();

Evento eventoUno("fiesta de iskander orgia interracial","31/10/2021","13:00");
Evento eventoDos("club nudista de carlos","20/10/2020","12;00");

  nuevaAgenda->mostrarEventos();
    nuevaAgenda->registrarEvento(eventoUno);
    nuevaAgenda->registrarEvento(eventoDos);
    nuevaAgenda->mostrarEventos();


    return 0;
}