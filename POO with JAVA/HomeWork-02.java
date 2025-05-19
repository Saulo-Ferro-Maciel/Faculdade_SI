import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int saldo = 0;
        int taxa = 0;
        int auxiliar = 0;
        int porcentagem = 0;
        boolean controle = false;
        
        while(!controle){
            System.out.println("Digite o valor saldo: ");
            saldo = scanner.nextInt();
            
            System.out.println("\nDigite a porcentagem: ");
            taxa = scanner.nextInt();
            
            porcentagem = (saldo*taxa)/100;
            auxiliar = saldo + porcentagem;
            
            System.out.println("\nO saldo informado "+saldo+" com a taxa de "+taxa+" tem o acrescimo de: "+porcentagem+".\nFicando no valor de: "+auxiliar);
            
            System.out.println("\n\nDeseja sair? (0 para sair e 1 para ficar)\nSua resposta: ");
            int pergunta = scanner.nextInt();
            if(pergunta==0){
                controle = true;
            }
        }
        
    }
}
