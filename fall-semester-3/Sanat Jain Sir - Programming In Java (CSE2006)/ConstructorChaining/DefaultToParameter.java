package ConstructorChaining;

class A{
    A() {
        this(5);
        System.out.println("Hello");
    }
    A (int x) {
        System.out.println(x);
    }
}

public class DefaultToParameter {
    public static void main(String[] args) {
        A a1 = new A();
}
}
