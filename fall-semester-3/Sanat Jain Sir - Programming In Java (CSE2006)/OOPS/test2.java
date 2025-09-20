package OOPS;

class Vehicle {
    void StartEngine() {
        System.out.println("Starting The Vehicle's Engine");
    }
    void StopEngine() {
        System.out.println("Stopping The Vehicle's Engine");
    }
}

class Car extends Vehicle {
    @Override
    void StartEngine() {
        super.StartEngine();
    }
    void StopEngine(){
        super.StopEngine();
    }
}

class Motorcycle extends Vehicle {
    @Override
    void StartEngine (){
        super.StartEngine();
    }
    void StopEngine () {
        super.StopEngine();
    }
}

class test2 {
    public static void main(String[] args){
        Vehicle v1 = new Vehicle();
        v1.StartEngine();
        v1.StopEngine();
        Car c1 = new Car();
        c1.StartEngine();
        c1.StopEngine();
        Motorcycle  m1 = new Motorcycle();
        m1.StartEngine();
        m1.StopEngine();
    }
}