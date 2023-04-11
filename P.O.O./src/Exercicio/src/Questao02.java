package Exercicio.src;

import java.util.Locale;
import java.util.Scanner;

public class Questao02{

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		System.out.println("Digite a temperatura: ");
		float temperatura = scanner.nextFloat();
		
		System.out.println("Digite o número da escala: 1-Celsius, 2-Fahrenheit; 3-Kelvin");
		int escala = scanner.nextInt();
		
		switch(escala) {
			case 1:
				System.out.printf("A temperatura %.2f ºC é igual a %.2f ºF e a %.2f ºK", temperatura, (temperatura*1.8 +32), (temperatura+273));
				break;
			case 2:
				System.out.printf("A temperatura %.2f ºF é igual a %.2f ºC e a %.2f ºK", temperatura, ((temperatura-32)/1.8), ((temperatura+459.67) * 5/9));
				break;
			case 3: 
				System.out.printf("A temperatura %.2f ºK é igual a %.2f ºC e a %.2f ºF", temperatura, (temperatura - 273), (1.8*(temperatura-273) + 32));
				break;
			default:
				System.out.println("Erro: selecione uma escala existente (1, 2 ou 3)");
				break;
		}
		
		scanner.close();

	}

}

