class Person {
    public String name = "Ravi";       // Public: accessible everywhere
    private int age = 20;              // Private: accessible only within this class
    protected String city = "Delhi";   // Protected: accessible within same package & subclasses
    String country = "India";          // Default: accessible only within same package

    public int getAge() {
        return age; // private accessed via getter
    }
}

public class AccessModifierDemo {
    public static void main(String[] args) {
        Person p = new Person();

        System.out.println("Name (public): " + p.name);
        System.out.println("Age (private via getter): " + p.getAge());
        System.out.println("City (protected): " + p.city);
        System.out.println("Country (default): " + p.country);
    }
}
