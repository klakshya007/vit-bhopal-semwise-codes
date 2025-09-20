package ExceptionHandling;
public class MultiCatch {
    public static void main(String[] args) {
        String s = null;
        int a =args.length;
        int m[] = new int[5];
        try {
            System.out.println(100/a);
            System.out.println(s.length());
            m[100]=100;
        }
        catch(ArithmeticException e) {
            System.out.println("Exception Name : " + e);
        }
        catch(NullPointerException e) {
            System.out.println("Exception Name : " + e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Exception Name : " + e);
        }
        finally {
            System.out.println("Aur Bhai * 5");
        }
    }
    
}
