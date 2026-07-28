import java.util.*;

public class BinaryPalindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int temp=n;
        int rev=0;
        while(n>0){
            rev<<=1;
            rev=rev|(n&1);
            n>>=1;
        }
        if(rev==temp)System.out.println("It Is A Binary Palindrome");
        else System.out.println("Not A Binary Palindrome");
        sc.close();
    }
}
