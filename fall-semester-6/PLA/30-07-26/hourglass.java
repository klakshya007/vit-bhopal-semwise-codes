import java.util.Scanner;

class hourglass{
    public static int calc(int arr[][],int row,int col){
        if (row<3||col<3){
            System.exit(0);
        }
        int maxSum=Integer.MIN_VALUE;
        int currSum=0;
        for(int i=0;i<row-2;i++){
            for (int j=0;j<col-2;j++){
                currSum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+
                arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                if(maxSum<currSum)maxSum=currSum;
            }
            currSum=0;
        }
        return maxSum;
    }
    public static void main(String[] args) {
        int arr[][]=new int[4][4];
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=sc.nextInt();
            }
        } 
        System.out.println(calc(arr, 4, 4));
        sc.close();
    }
}