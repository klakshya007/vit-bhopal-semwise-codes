import java.util.Scanner;;

public class swapNibble {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();
        int upper = (a&0xF0)>>4;
        int lower = (a&0x0F)<<4;
        int result = upper | lower;
        System.out.println(result);
        sc.close();
    }
}
