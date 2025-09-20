class Animal {
    String name = "Animal";

    void sound() {
        System.out.println("Animals make sounds");
    }
}

class Dog extends Animal {
    String name = "Dog";

    void sound() {
        super.sound(); 
        System.out.println("Dog barks");
    }

    void showNames() {
        System.out.println("Child name: " + name);
        System.out.println("Parent name: " + super.name);
    }
}

public class SuperKeywordDemo {
    public static void main(String[] args) {
        Dog d = new Dog();
        d.sound();
        d.showNames();
    }
}
