package ExceptionHandling;

public class ThrowsDemo {
    static void ThrowOne() throws IllegalAccessException {
        System.out.println("Inside Throw One");
        throw new IllegalAccessException("demo");
    }
    public static void main(String[]args) {
        try {
        ThrowOne(); 
        }
        catch (IllegalAccessException e) {
            System.out.println(e);
        }
    }
}
