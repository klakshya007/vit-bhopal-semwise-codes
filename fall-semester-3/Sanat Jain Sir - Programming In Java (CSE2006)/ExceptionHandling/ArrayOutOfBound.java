package ExceptionHandling;

public class ArrayOutOfBound {
    public static void main(String[] args) {
        int a[] = {1,3,4,5,};
        try {
            a[10]=50;
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println(e);
        }
        finally {
            System.out.println("Aur Bhai");
        }
    }
    
}
