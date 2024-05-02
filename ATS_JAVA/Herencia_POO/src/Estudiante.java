
import java.util.ArrayList;
import java.util.List;

public class Estudiante extends Persona {

    private int codigoEstudiante;
    private float notaFinal;
    private List<Curso> cursos;

    public Estudiante(String nombre, String apellido, int edad, int codigoEstudiante, float notaFinal) {
        super(nombre, apellido, edad);
        this.codigoEstudiante = codigoEstudiante;
        this.notaFinal = notaFinal;
        this.cursos = new ArrayList<>();
    }

    // Le agregaremos cursos a los estudiantes 
    public List<Curso> getCursos() {
        return cursos;
    }

    public void agregarCurso(Curso curso) {
        cursos.add(curso);
    }

    public void eliminarCurso(Curso curso) {
        cursos.remove(curso);
    }

    public void mostrarDatos() {
        System.out.println("mostrando los datos del estudiante: \n");
        System.out.println("\n");
        System.out.println("Nombre: " + getNombre() + "\n");
        System.out.println("apellido " + getApellido() + "\n");
        System.out.println("edad: " + getEdad() + "\n");
        System.out.println("codigo de estudiante: " + codigoEstudiante + "\n");
        System.out.println("Nota final: " + notaFinal + "\n");

        if (cursos.isEmpty()) {
            System.out.println("no hay cursos por mostrar");
        } else {
            for (Curso curso : cursos) {
                System.out.println("curso: " + curso.getNombre() + ". - creditos: " + curso.getCreditos() + "\n");
            }
        }
    }

    public int getCodigoEstudiante() {
        return codigoEstudiante;
    }

    public float getNotaFinal() {
        return notaFinal;
    }

  
}
