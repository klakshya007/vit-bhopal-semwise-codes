import java.util.*;

public class q2 {
public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    System.out.println("All Marks Must Be Out Of 100");
    System.out.print("Enter The Marks Of First Subject : ");
    int marks1=sc.nextInt();
    System.out.print("Enter The Marks Of Second Subject : ");
    int marks2=sc.nextInt();
    System.out.print("Enter The Marks Of Third Subject : ");
    int marks3=sc.nextInt();
    System.out.print("Enter The Marks Of Fourth Subject : ");
    int marks4=sc.nextInt();
    System.out.print("Enter The Marks Of Fifth Subject : ");
    int marks5=sc.nextInt();
    int percentage = (marks1+marks2+marks3+marks4+marks5)/5;
    String ans = "";
    if (percentage>100){
        ans="NOT VALID";
    }
    else if(percentage>=90 && percentage<=100){
        ans="A";
    }
    else if (percentage>=80){
        ans="B";
    }
    else if (percentage>=70){
        ans="C";
    }
    else if (percentage>=60){
        ans="D";
    }
    else if (percentage>=0){
        ans="F";
    }
    else {
        ans = "NOT VALID";
    }
    System.out.println("Percentage : "+percentage);
    System.out.print("Grade : "+ans);
    sc.close();
}
}
