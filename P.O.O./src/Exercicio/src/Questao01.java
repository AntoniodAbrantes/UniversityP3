package Exercicio.src;
import java.util.Locale;
import java.util.Scanner;

public class Questao01 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        System.out.println("||||SELECIONE A OPERAÇÃO||||\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n5-Potenciação\n6-Raiz cúbica\n7-Raiz Quadrada");
        int opcao = scanner.nextInt();
        scanner.nextLine();

        if (opcao >= 1 && opcao <= 5) {
            System.out.println("Digite um número para a operação: ");
            float num1 = scanner.nextFloat();
            System.out.println("Digite outro número para a operação: ");
            float num2 = scanner.nextFloat();
            if (num2 == 0) {
                System.out.println("Digite outro número (o divisor não pode ser 0): ");
                num2 = scanner.nextFloat();
            }
            switch (opcao) {
                case 1:
                    System.out.println("Soma = " + (num1 + num2));
                    break;
                case 2:
                    System.out.println("Subtração = " + (num1 - num2));
                    break;
                case 3:
                    System.out.println("Multiplicação = " + (num1 * num2));
                    break;
                case 4:
                    System.out.println("Divisão = " + (num1 / num2));
                    break;
                case 5:
                    System.out.println("Potenciação = " + (Math.pow(num1, num2)));
                    break;
            }
        }
        if (opcao == 6) {
            System.out.println("Digite um número para a raiz cúbica: ");
            float num1 = scanner.nextFloat();
            System.out.printf("A raiz cúbica de %.1f é igual a %.1f", num1, Math.cbrt(num1));
        }
        if (opcao == 7) {
            System.out.println("Digite um número para a raiz quadrada: ");
            float num1 = scanner.nextFloat();
            System.out.printf("A raiz quadrada de %.1f é igual a %.1f", num1, Math.sqrt(num1));
        }
        scanner.close();
    }

}
