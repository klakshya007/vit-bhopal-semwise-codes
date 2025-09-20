package ExceptionHandling;

class InvalidAgeException extends Exception {
    public InvalidAgeException (String str) {
    super(str);
    }
}

public class CustomException {
    static void ValidateAge(int age) throws InvalidAgeException {
        if (age<18){
            throw new InvalidAgeException("Age Not Enough");
        }
        else {
            System.out.println("You Can Vote");
        }
    }    
    public static void main(String[] args) {
        try {
            ValidateAge(16);
        }
        catch (InvalidAgeException e) {
            System.out.println("Exception Name : " + e);
        }
        finally {
            System.out.println("The Rest Of The Code....");
        }
    }
}
