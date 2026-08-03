import java.util.*;

public class maxEquillibrium {
    public static void main(String[] args) {
        int[] a = new int[7];
        Scanner sc = new Scanner(System.in);
        int totalSum=0;
        for(int i=0;i<3;i++){
            int b=sc.nextInt();
            a[i]=b;
            totalSum+=b;
        }
        int leftSum=0;
        int ans_index=-1;
        for(int i=0;i<3;i++){
            int rightSum=totalSum-leftSum-a[i];
            if(rightSum==leftSum)ans_index=i;
            leftSum+=a[i];
        }
        System.out.println(ans_index-1);
        System.out.println(leftSum);
        sc.close();
    }
}
