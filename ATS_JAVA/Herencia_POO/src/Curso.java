
/**
 *
 * @author UV
 */
public class Curso {

    private String nombre; // Course name
    private int creditos; // Course credits

    // Constructor to initialize course attributes
    public Curso(String nombre, int creditos) {
        this.nombre = nombre;
        this.creditos = creditos;
    }

    // Getter method for course name
    public String getNombre() {
        return nombre;
    }

    // Setter method for course name
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    // Getter method for course credits
    public int getCreditos() {
        return creditos;
    }

    // Setter method for course credits
    public void setCreditos(int creditos) {
        this.creditos = creditos;
    }

    // Method to print course information
    public void mostrarDatos() {
        System.out.println("Nombre del curso: " + nombre);
        System.out.println("Créditos del curso: " + creditos);
    }
}