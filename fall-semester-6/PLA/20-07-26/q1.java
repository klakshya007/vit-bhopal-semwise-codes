import java.util.Scanner;

class something{
    static void  seive (int n) {
        boolean prime[]  = new boolean [n];
        for (int i=2;i<n;i++){
            prime[i]=true;
        }
        
        for(int i=2;i*i<n;i++){
            if(prime[i]==true){
                for(int j=i*1;j<=n;j+=i){
                    prime[i]=false;
                }
            }
        }

        for(int i=2;i<=n;i++){
            if(prime[i]==true){
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        seive(n);
        sc.close();
    }
}