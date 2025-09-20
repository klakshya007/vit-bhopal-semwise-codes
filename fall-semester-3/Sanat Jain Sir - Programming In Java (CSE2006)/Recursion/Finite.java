package Recursion;

public class Finite {
    static int count = 0;
    static void ok () {
        count ++;
        if (count <=5){
            System.out.println(count);
            ok();
        }
    }
    public static void main(String[] args) {
        ok();
    }
}