import java.util.Scanner;

public class q2 {
    public static int power(int a, int b){
        int ans=1;
        while(b!=0){
            ans*=3;
            b--;
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        a=sc.nextInt();
        int rem=a%3;
        int temp =0;
        if(rem==0){
            temp =power(3,a/3);
        }
        else if (rem==1){
            temp = (power(3,a/3))/3*4;
        }
        else if (rem==2){
            temp = (power(a, a/3))*2;
        }
        System.out.print(temp);
        sc.close();
    }
}
