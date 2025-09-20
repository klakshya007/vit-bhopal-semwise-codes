package OOPS;

class Shape {
    String color;
    void Area() {
        System.out.println ("Displays Area");
    }
}

class Triangle extends Shape {
    public void Area(int l, int h) {
        System.out.println(.5 * l * h);
    }
}

class Circle extends Shape {
    public void Area(int r) {
        System.out.println(Math.PI*r*r);
    }
}

class EquilateralTriangle extends  Triangle {
    public void Area (int l, int h){
        System.out.println(.5 * l * h);
    }
}
public class test3 {
    public static void main(String[] args) {
        Triangle t1 = new Triangle();
        t1.color="Red";
        t1.Area(20,40);
        EquilateralTriangle t2 = new EquilateralTriangle();
        t2.color = "Blue";
        t2.Area(20,20);
        Circle c1 = new Circle();
        c1.color = "Green";
        c1.Area(2);
    }
}
