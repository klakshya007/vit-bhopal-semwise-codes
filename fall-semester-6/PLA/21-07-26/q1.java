import java.util.Scanner;

class something{
    static void  seive (int n) {
        boolean prime[]  = new boolean [n+1];
        for (int i=2;i<n;i++){
            prime[i]=true;
        }
        
        for(int i=2;i*i<n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }

        for(int i=2;i<n;i++){
            if(prime[i]==true){
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        n=sc.nextInt();
        seive(n+1);
        sc.close();
    }
}