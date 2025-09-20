package Stuff;
import java.util.Scanner;

class Division {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int x, y , quotient;
        System.out.println("Enter The First Integer X : ");
        x=sc.nextInt();
        System.out.println("Enter The First Integer X : ");
        y=sc.nextInt();
        quotient=x/y;
        if (y==0) {
            System.out.println("Division By Zero Is Not Possible");
        }
        System.out.printf("Then X/Y Is : %d",quotient);
        sc.close();
    }
}