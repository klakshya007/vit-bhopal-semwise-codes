
class A {
    A() {
        System.out.println("HelloWindows Command Line");
    }
}

public class InstanceOf {
    public static void main() {
        A a1 = new A();
        System.out.println(a1 instanceof A);
    }
}
