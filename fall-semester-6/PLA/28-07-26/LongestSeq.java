import java.util.*;

public class LongestSeq {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
            int max_l=0;
        int count=0;
        while(n!=0){
            int temp=n&1;
            n>>=1;
            if(temp==1)count++;
            else {
                if (max_l<count){
                    max_l=count;
                }
                count=0;
            }
        }
        if (max_l<=count){
                max_l=count;
            }
        System.out.println(max_l);
        sc.close();
    }
}
