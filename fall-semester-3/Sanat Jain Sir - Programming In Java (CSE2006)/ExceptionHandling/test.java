package ExceptionHandling;
import java.util.Scanner;

public class test {
    public static void main(String[]args) {
        Scanner sc = new Scanner(System.in);
        try {
            int a=100;
            int d = sc.nextInt();
            System.out.println(a/d);
        }
        catch (ArithmeticException e) {
            System.out.println(e);
        }
        System.out.println("Aur Bhai");
        sc.close();
        }
}
