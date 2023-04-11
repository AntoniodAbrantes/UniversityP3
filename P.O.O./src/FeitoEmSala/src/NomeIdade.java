import java.util.Scanner;
public class NomeIdade {
     public static void main(String[] args) {
            
            System.out.println("Escreva seu nome: ");
            Scanner input = new Scanner(System.in);
            String name = input.nextLine();
            
            System.out.println("Escreva sua idade: ");
            int yrs = input.nextInt();
            
            System.out.println("Seu nome eh " + name + " e vc tem " + yrs + " anos.");
        }
}
