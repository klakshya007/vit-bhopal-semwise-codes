public class SimpleSieve {
    public static void simple_seive(int n){
        boolean prime[] = new boolean[n+1];

        for(int i=2;i<=n;i++){
            prime[i]=true;
        }

        for(int i=2;i<=n;i++){
            if(prime[i]==true){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=false;
                }
            }
        }

        for(int i=60;i<=n;i++){
            if(prime[i]==true){
                System.out.print(i+" ");
            }
        }
    }

    public static void main(String[] args) {
        simple_seive(100);
    }
}
