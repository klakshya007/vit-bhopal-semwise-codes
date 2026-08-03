import java.util.Scanner;

public class equilibriumSum {
    public static int  getEquilIndex(int arr[]){
        int totalSum=0;
        for(int i=0;i<arr.length;i++){
            totalSum+=arr[i];
        }
        int leftSum=0;
        for(int i=0;i<arr.length;i++){
            int rightSum=totalSum-leftSum-arr[i];
            if(leftSum==rightSum)return i;

            leftSum+=arr[i];
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int arr[]=new int[7];
        for(int i=0;i<7;i++){
            arr[i]=sc.nextInt();
        }
        System.out.print(getEquilIndex(arr));
        sc.close();
    }
}
