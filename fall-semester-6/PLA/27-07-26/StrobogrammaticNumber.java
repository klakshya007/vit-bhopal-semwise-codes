import java.util.*;

public class StrobogrammaticNumber {
    static boolean strobogrammatic(String n){
        Map<Character,Character > strobo = new HashMap<>();
        strobo.put('0','0'); 
        strobo.put('8','8'); 
        strobo.put('1','1'); 
        strobo.put('6','9'); 
        strobo.put('9','6');
        
        int l=0;
        int r=n.length()-1;
        while(l<=r){
            char leftChar = n.charAt(l);
            char rightChar = n.charAt(r);

            if (!strobo.containsKey(leftChar)) {
                return false;
            }

            if (strobo.get(leftChar) != rightChar) {
                return false;
            }
            l++;r--;
        }
        return true;
    }
    public static void main(String[] args) {
        System.out.print("Enter A Number: ");
        Scanner sc = new Scanner(System.in);
        String n=sc.next();
        System.out.print(strobogrammatic(n));
        sc.close();
    }
}
