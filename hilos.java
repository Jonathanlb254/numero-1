import org.jfugue.Player;

public class SumMusic {
    public static void main(String[] args) {
        // Crear un nuevo hilo para la tarea de reproducción de música
        Thread musicThread = new Thread(() -> {
            Player player = new Player();
            player.play("V0 C D E F G A B");
        });

        // Crear un nuevo hilo para la tarea de suma de números enteros
        Thread sumThread = new Thread(() -> {
            int num1 = 5;
            int num2 = 10;
            int sum = num1 + num2;
            System.out.println("The sum of " + num1 + " and " + num2 + " is: " + sum);
        });

        // Iniciar los hilos
        musicThread.start();
        sumThread.start();
    }
}
