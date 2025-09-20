package Stuff;
import java.util.Scanner;

class Summation {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int x, y , sum;
        System.out.println("Enter The First Integer X : ");
        x=sc.nextInt();
        System.out.println("Enter The First Integer X : ");
        y=sc.nextInt();
        sum=x+y;
        System.out.printf("The Summation Of The Two Nos. Is : %d",sum);
        sc.close();
    }
}