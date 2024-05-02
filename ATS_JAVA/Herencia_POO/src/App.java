public class App {
    public static void main(String[] args)  {
        Estudiante gerly = new Estudiante("GERLY DANIEL", "ARTEAGA BERNAL", 23, 21017270, 7.8f);
        gerly.mostrarDatos();
        Estudiante charlie = new Estudiante("charlie josue", "cortes lopezzzz", 21, 21017278, 7.9f);
        charlie.mostrarDatos();

        // instanciaremos a un profesor
        Catedratico mag = new Catedratico("MAGDIEL OMAR", "MERCADO CARRILLO", 45, 45000, 46790);
        Curso curso1 = new Curso("Bases de datos no convencionales", 30);
        mag.agregarCurso(curso1);
        Curso curso2 = new Curso("Matematicas discretas", 25);
        mag.agregarCurso(curso2);
        mag.mostrarDatos();
    }

}
