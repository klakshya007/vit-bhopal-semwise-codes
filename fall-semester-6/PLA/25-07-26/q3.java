public class q3 {
    static void seive(int maxLimit) {
        boolean prime[] = new boolean[maxLimit + 1];
        
        for (int i = 2; i <= maxLimit; i++) {
            prime[i] = true;
        }

        for (int i = 2; i * i <= maxLimit; i++) {
            if (prime[i] == true) {
                // Start marking from i * i
                for (int j = i * i; j <= maxLimit; j += i) {
                    prime[j] = false; 
                }
            }
        }
        
        for (int i = 50; i <= maxLimit; i++) { 
            if (prime[i] == true) {
                System.out.print(i + " ");
            }
        }
    }

    public static void main(String[] args) {
        seive(100);
    }
}
