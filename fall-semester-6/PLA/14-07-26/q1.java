import java.util.Scanner;

class q1{
    public static void main(String []args){
        Scanner sc = new Scanner(System.in);
        long a;
        System.out.print("Enter Any Number : ");
        a=sc.nextInt();
        System.out.println(a);
        while(a!=1){
            if(a%2==0){
                a/=2;
            }
            else {
                a=a*3+1;
            }
            System.out.println(a);
        }
        sc.close();
    }
}