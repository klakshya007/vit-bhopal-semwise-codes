package ConstructorChaining;

class A { 
    A () {
        System.out.println("Hello");
    }
    A (int x) {
        this ();
        System.out.println(x);
    }
}

public class ParamterToDefault {
    public static void main (String [] args) {
        A a1 = new A(5);
    }
}