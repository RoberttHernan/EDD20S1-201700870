package ht1;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author Roberto Calvillo 201700870 Estructura de Datos
 */
public class HT1 {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.println("Ingrese el numero M de su matriz M*M");

        int tamanio = entrada.nextInt();

        Matriz(tamanio);
    }

    public static void Matriz(int tamanio) {
        int matriz[][] = new int[tamanio][tamanio];

        for (int i = 0; i < tamanio; i++) {
            for (int j = 0; j < tamanio; j++) {

                if ((i == 0) || i == tamanio - 1) {
                    System.out.print(matriz[i][j] + 1);
                } else if ((j == 0) || j == tamanio - 1) {
                    System.out.print(matriz[i][j] + 1);
                } else {
                    System.out.print(matriz[i][j]);
                }

            }
            System.out.println("");

        }

    }

}
