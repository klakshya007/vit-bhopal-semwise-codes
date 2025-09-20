package OOPS;

class Pen {
    String color;
    String type;

    public void write(){
        System.out.println("Writing Something");
    }

    public void printcolor(){
        System.out.println(this.color);
    }
}


class Student {
    String name;
    int age;

    public void printInfo(String name) {
        System.out.println(name);
    }
    public void printInfo(int age) {
        System.out.println(age);
    }
    public void printInfo(String name,int age){
        System.out.println(name + " " +age);
    }

    Student () {
        System.out.println("Non-Parameterized Constructor Called");
    }
    Student (String name,int age){
        this.name=name;
        this.age=age;
        System.out.println("Parameterized Constructor Called");
    }

    Student (Student s2) {
        this.name=s2.name;
        this.age = s2.age;
        System.out.println("Copy Constructor Called");
    }

}



public class test1 {
    public static void main(String[]args){
        Pen pen1 = new Pen();
        pen1.color = "blue";
        pen1.type ="gel";
        pen1.write();
        Pen pen2 = new Pen();
        pen2.color = "green";
        pen2.type = "ball";
        pen1.printcolor();
        pen2.printcolor();

        Student s1 = new Student();
        s1.age=20;
        s1.printInfo("Lakshya");

        Student s2 =new Student();
        s2.printInfo(20);

        Student s3 = new Student(s2);
        s3.printInfo("Ryzenn",20);
    }
}