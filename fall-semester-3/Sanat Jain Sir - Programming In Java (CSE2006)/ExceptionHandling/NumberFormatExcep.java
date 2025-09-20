package ExceptionHandling;

public class NumberFormatExcep {
    public static void main(String[] args) {
        String s = "abc";
        try {
        int i = Integer.parseInt(s);
        System.out.println(i);
        }
        catch (NumberFormatException  e) {
            System.out.println(e);
        }
        finally {
            System.out.println("Aur Bhai * 3");
        }
    }
    
}
