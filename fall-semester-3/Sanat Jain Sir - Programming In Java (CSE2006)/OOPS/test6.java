package OOPS;

interface Omkk {
    void walk();
    void eat(); 
}
class Horse implements Omkk{
    public void walk() {
        System.out.println("A Horse Can Walk");
    }
    public void eat() {
        System.out.println("A Horse Can Eat As Well");
    }
} 

public class test6 {
    public static void main(String[] args) {
        Horse h1 = new Horse();
        h1.walk();
        h1.eat();
    }
}
