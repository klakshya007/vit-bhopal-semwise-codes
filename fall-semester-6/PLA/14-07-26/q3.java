import java.util.Scanner;

public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a;a=sc.next();
        int evenfreq=0;
        int count =1;
        for(int i=1;i<a.length();i++){
            if(a.charAt(i)==a.charAt(i-1)){
                count++;
            }
            else {
                if (count%2==0)evenfreq+=count;
                count=1;
            }
        }
        if(count%2==0)evenfreq+=count;
        System.out.println(evenfreq);
        sc.close();
    }
}
