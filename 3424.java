import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        int n, count = 0, acumulador = 0;
        String trecho;
        Scanner scan = new Scanner(System.in);
        
        n = scan.nextInt();
        trecho = scan.next();
    
        for (int i = 0; i < 12; i++){
            if (trecho.charAt(i) == 'a'){
                count++;
            }
            else {
                if (count >= 2){
                    acumulador += count;
                }
                count = 0;
            }
        }
       System.out.println(String.format("%d", acumulador));
 
    }
 
}