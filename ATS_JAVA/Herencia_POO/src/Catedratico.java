import java.util.ArrayList;
import java.util.List;

public class Catedratico extends Persona {
    private int sueldo;
    private int codigoTrabajador;

    private List<Curso> cursos;

    public Catedratico(String nombre, String apellido, int edad, int sueldo, int codigoTrabajador) {
        super(nombre, apellido, edad);
        this.sueldo = sueldo;
        this.codigoTrabajador = codigoTrabajador;
        this.cursos = new ArrayList<>();
    }
    
     public int getSueldo() {
        return sueldo;
    }

    public int getCodigoTrabajador() {
        return codigoTrabajador;
    }

    public List<Curso> getCursos() {
        return cursos;
    }

    public void agregarCurso(Curso curso) {
        cursos.add(curso);
    }

    public void eliminarCurso(Curso curso) {
        cursos.remove(curso);
    }

    public void mostrarDatos(){
        System.out.println("mostrando los datos del estudiante: \n");
        System.out.println("\n");
        System.out.println("Nombre: "+getNombre()+"\n");
        System.out.println("apellido "+getApellido()+"\n");
        System.out.println("edad: "+getEdad()+"\n");
        System.out.println("codigo del catedratico: "+getCodigoTrabajador()+"\n");
        System.out.println("Sueldo del trabajador: "+getSueldo()+"\n");
        System.out.println("Cursos asignados a este catedratico: \n");
        for (Curso curso : cursos) {
            if (cursos.isEmpty()) {
                System.out.println("No hay cursos disponibles");
            }
        }
    }
}
