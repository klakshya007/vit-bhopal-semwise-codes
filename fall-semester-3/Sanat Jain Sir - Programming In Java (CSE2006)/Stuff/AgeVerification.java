package Stuff;
import java.util.Scanner;

class AgeVerification {
    public static void main(String[] args) {
        int x;
        Scanner scan=new Scanner (System.in);
        System.out.println("Enter Your Age : ");
        x=scan.nextInt();
        if (x>=18) {
            System.out.println("Congrats!, You Are Eligible For Voting");
        }
        else {
            System.out.println("Oops, You Are Not Eligible");
        }
        scan.close();
    }
}