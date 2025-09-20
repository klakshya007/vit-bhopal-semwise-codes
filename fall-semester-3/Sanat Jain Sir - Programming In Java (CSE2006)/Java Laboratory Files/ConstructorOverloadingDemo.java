class Student {
    String name;
    int age;
    String course;

    Student() {
        name = "Unknown";
        age = 0;
        course = "Not Assigned";
    }

    Student(String name, int age) {
        this.name = name;
        this.age = age;
        this.course = "General";
    }

    Student(String name, int age, String course) {
        this.name = name;
        this.age = age;
        this.course = course;
    }

    void display() {
        System.out.println("Name: " + name + ", Age: " + age + ", Course: " + course);
    }
}

public class ConstructorOverloadingDemo {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student("Ravi", 20);
        Student s3 = new Student("Anita", 22, "Computer Science");

        s1.display();
        s2.display();
        s3.display();
    }
}
