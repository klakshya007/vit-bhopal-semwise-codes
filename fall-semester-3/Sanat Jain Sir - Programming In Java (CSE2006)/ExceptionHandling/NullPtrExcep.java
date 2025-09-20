package ExceptionHandling;

public class NullPtrExcep {
    public static void main(String[] args) {
        String s = null;
        try {
            System.out.println (s.length());
        }
        catch (NullPointerException e) {
            System.out.println(e);
        }
        System.out.println("Aur Bhai * 2");
    }
    
}
