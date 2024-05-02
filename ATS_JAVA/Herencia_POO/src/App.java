
public class App {

    public static void main(String[] args) {
        //instanciamos un par de alumnos 
        Estudiante gerlyuwu = new Estudiante("GERLY DANIEL", "ARTEGA BERNAL", 23,   21017270,7.6f);
        Curso cursoGerly1 = new Curso("Bases de datos", 10);
        gerlyuwu.agregarCurso(cursoGerly1);
        Curso cursoGerly2 = new Curso("requerimientos de software", 15);
        gerlyuwu.agregarCurso(cursoGerly2);
        gerlyuwu.mostrarDatos();

        Estudiante habibi = new Estudiante("HABIB", "JACINTO AGUIRRE", 21, 2101234, 9.0f);
        Curso cursoHabibi1 = new Curso("metodologia de la investigacion", 10);
        habibi.agregarCurso(cursoHabibi1);
        Curso cursoHabibi2 = new Curso("Experiencia recepcional", 25);
        habibi.agregarCurso(cursoHabibi2);
        habibi.mostrarDatos();


        // instanciaremos a un profesor
        Catedratico mag = new Catedratico("MAGDIEL OMAR", "MERCADO CARRILLO", 45, 45000, 46790);
        Curso cursoMag1 = new Curso("Bases de datos no convencionales", 30);
        mag.agregarCurso(cursoMag1);
        Curso cursoMag2 = new Curso("Matematicas discretas", 25);
        mag.agregarCurso(cursoMag2);
        mag.mostrarDatos();

        //instanciamos a otro profesor? 
        Catedratico pino = new Catedratico("JAVIER ", "PINO HERRERA", 40, 50000, 23019483);
        Curso cursoPino1 = new Curso("Desarrollo de sistemas en red", 9);
        pino.agregarCurso(cursoPino1);
        Curso cursoPino2 = new Curso("Desarrollo de software", 8);
        pino.agregarCurso(cursoPino2);
        pino.mostrarDatos();

    }

}
