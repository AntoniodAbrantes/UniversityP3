import java.util.Scanner;

public class ImparPar {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int quantidadeNumeros = 0;
        int quantidadePares = 0;
        int quantidadeImpares = 0;

        while (quantidadePares < 5) {
            System.out.print("Digite um número inteiro: ");
            int numero = input.nextInt();
            quantidadeNumeros++;

            if (numero % 2 == 0) {
                quantidadePares++;
            } else {
                quantidadeImpares++;
            }

            if (quantidadePares == 5) {
                System.out.println("Quantidade total de números digitados: " + quantidadeNumeros);
                System.out.println("Quantidade de números pares digitados: " + quantidadePares);
                System.out.println("Quantidade de números ímpares digitados: " + quantidadeImpares);
                break;
            }

            System.out.println("O número digitado é " + (numero % 2 == 0 ? "par." : "ímpar."));
        }

        input.close();
    }
}
