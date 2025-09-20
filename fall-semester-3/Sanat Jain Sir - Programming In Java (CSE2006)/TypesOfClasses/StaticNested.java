package TypesOfClasses;

class Outer {
    static int data = 34;
    static class Nested {
        void msg(){
            System.out.println("Hello Windows Command-Line " + data);
        }
    } 
}

public class StaticNested {
    public static void main(String [] args) {
        Outer.Nested o1 = new Outer.Nested();
        o1.msg();
    }
}