import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int casos_de_teste, 
        maior = 0, 
        aux,  
        baloes_estourados = 0, 
        flecha = 0;
        boolean flecha_caida = false;
        
        casos_de_teste = scanner.nextInt();
        ArrayList<Integer> baloes = new ArrayList<>();
        
        for (int i = 0; i < casos_de_teste; i++) {
            aux = scanner.nextInt();
            baloes.add(aux);
        }
        maior = baloes.get(0);
        System.out.println("maior: " + maior);
        int i = 0;
        while (i < baloes.size()) {
            if ((baloes.get(i) == maior) && (!flecha_caida)) {
                baloes.set(i, 0);
                baloes_estourados++;
                maior--;
                if (maior == 0) {
                    flecha_caida = true;
                }
            }
            i++;
            if ((i == casos_de_teste) && (baloes_estourados <= casos_de_teste)) {
                flecha++;
                i = 0;
                flecha_caida = false;
            }
        }
        scanner.close();
        System.out.println(flecha);
    }
}
