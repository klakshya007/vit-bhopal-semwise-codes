class Student {
    String name;
    int age;

    Student(String name, int age) {
        this.name = name;
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
    }

    void show() {
        this.display();
    }
}

public class ThisKeywordDemo {
    public static void main(String[] args) {
        Student s = new Student("Ravi", 20);
        s.show();
    }
}
