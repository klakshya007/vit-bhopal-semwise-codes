import java.util.Scanner;

public class VowelOrConsonant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a single character: ");
        char ch = sc.next().charAt(0);

        char[] vowels = {'a','e','i','o','u','A','E','I','O','U'};
        boolean isVowel = false;

        for (char v : vowels) {
            if (ch == v) {
                isVowel = true;
                break;
            }
        }

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (isVowel)
                System.out.println(ch + " is a Vowel.");
            else
                System.out.println(ch + " is a Consonant.");
        } else {
            System.out.println("Invalid input. Please enter an alphabet.");
        }

        sc.close();
    }
}
