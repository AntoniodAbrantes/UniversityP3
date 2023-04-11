package Exercicio.src;

import java.util.Locale;
import java.util.Scanner;

public class Questao03 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		System.out.println("Nome e Sobrenome: ");
		String nome = sc.next();
		String sobrenome = sc.next();
		

		switch(nome) {
		 case "Diana":
			 System.out.println("Bem-vinda, Princesa de Themyscara");
			 break;
		}
		
		switch (sobrenome) {
			case "Wayne":
				System.out.println("Acesso liberado, Sr. Wayne");
				break;
			case "Kent":
				System.out.println("Sai daí, mané!");
				break;
		}
		System.out.println("Cai fora!");

	}

}
