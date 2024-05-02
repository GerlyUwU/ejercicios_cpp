public class Estudiante extends Persona {
    private int codigoEstudiante;
    private float notaFinal;

    public Estudiante(String nombre, String apellido, int edad, int codigoEstudiante, float notaFinal) {
        super(nombre, apellido, edad);
        this.codigoEstudiante = codigoEstudiante;
        this.notaFinal = notaFinal;
    }

    public void mostrarDatos(){
        System.out.println("mostrando los datos del estudiante: \n");
        System.out.println("\n");
        System.out.println("Nombre: "+getNombre()+"\n");
        System.out.println("apellido "+getApellido()+"\n");
        System.out.println("edad: "+getEdad()+"\n");
        System.out.println("codigo de estudiante: "+codigoEstudiante+"\n");
        System.out.println("Nota final: "+notaFinal+"\n");
    }

}