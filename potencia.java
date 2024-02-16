public class PotenciaRecursiva {

    public static void main(String[] args) {
        int base = 2;
        int exponente = 3;
        int resultado = calcularPotencia(base, exponente);
        System.out.println(base + " elevado a la " + exponente + " es igual a: " + resultado);
    }

    // Función recursiva para calcular la potencia usando solo la suma
    public static int calcularPotencia(int base, int exponente) {
        if (exponente == 0) {
            return 1;
        } else {
            return base * calcularPotencia(base, exponente - 1);
        }
    }
}
