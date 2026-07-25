import java.util.Scanner;

public class q2 {
    public static void main(String[] args) {
        String a;
        System.out.print("Enter Your Choice (rock, paper, scissor) : ");
        Scanner sc =new Scanner(System.in);
        a=sc.nextLine();
        if(a.equals("rock") )System.out.println("paper");
        else if(a.equals("paper"))System.out.println("scissor");
        else if(a.equals("scissor"))System.out.println("rock");
        sc.close();
    }
}
