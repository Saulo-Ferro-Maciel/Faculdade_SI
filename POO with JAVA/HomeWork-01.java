import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int soma1 = 0;
        int soma2 = 0;
        int media1 = 0;
        int media2 = 0;
        int MAX = 0;
        
        System.out.println("Digite a quantidade de numemros na media:");
        MAX = scanner.nextInt();
        
        System.out.println("\nDigite os "+MAX+" primeiros numeros:");
        for(int i = 0; i <MAX;i++){
            System.out.println("Digite o "+(i+1)+" numero: ");
            int numero = scanner.nextInt();
            soma1 +=numero;
        }
        media1 = soma1/3;
        
        System.out.println("\nDigite a quantidade de numemros na media:");
        MAX = scanner.nextInt();
        
        System.out.println("\nDigite os "+MAX+" segundos numeros:");
        for(int i = 0; i <MAX;i++){
            System.out.println("Digite o "+(i+1)+" numero: ");
            int numero = scanner.nextInt();
            soma2 +=numero;
        }
        media2 = soma2/3;
        
        int somaMedia = media2 + media1;
        int mediaMedias = somaMedia/2;
        
        System.out.println("\nA primeira media eh: "+media1+".\nA segunda media eh: "+media2+".\nA soma das medias eh: "+somaMedia+"\nA media das medias eh: "+mediaMedias);
    }
}
