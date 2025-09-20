package OOPS;

abstract class Animal {
    abstract void Eat();
    abstract void Sleep();
    public void Voice() {
        System.out.println("Each Animal Has Some Sort Of Voice");
    }
    Animal () {
        System.out.println("You Are An Animal");
    }
}

class Lion extends Animal {
    void Eat(){
        System.out.println("Lion Eats");
    }
    void Sleep() {
        System.out.println("Lion Sleeps");
    }
}
class Tiger extends Animal {
    void Eat(){
        System.out.println("Tiger Eats");
    }
    void Sleep() {
        System.out.println("Tiger Sleeps");
    }
}
class Deer extends Animal {
    void Eat(){
        System.out.println("Deer Eats");
    }
    void Sleep() {
        System.out.println("Deer Sleeps");
    }
}



public class test4 {
    public static void main(String[] args) {
        Lion l1 = new Lion();
        l1.Eat();
        l1.Sleep();
        Tiger t1 = new Tiger();
        t1.Eat();
        t1.Sleep();
        Deer d1 = new Deer();
        d1.Eat();
        d1.Sleep();
    }
}
