import java.util.*;
import java.lang.String;

public class q2 {
    static int checkHard(String a){
    int vowCount=0;
    int consCount=0;
    int tempconsCount=0;
    for(int i=0;i<a.length();i++){
        char letter = a.charAt(i);
        if(letter==('a') || letter==('e') ||letter==('i') || letter==('o') ||letter==('u')  ){
            vowCount++;
            tempconsCount=0;
        }
        else {
            consCount++;
            tempconsCount++;
            if (tempconsCount==3)return 1;
        }
    }
    if(consCount>vowCount)return 1;
    return 0;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String sentence = sc.nextLine();
        sc.close();

        String word = "";
        int hard = 0, easy = 0;

        for (int i = 0; i <= sentence.length(); i++) {

            if (i == sentence.length() || sentence.charAt(i) == ' ') {

                if (word.length() > 0) {
                    if (checkHard(word) == 1)hard++;
                    else easy++;
                }
                word = "";
            } 
            else {
                word += sentence.charAt(i);
            }
        }

        System.out.println(5*hard-2*easy);
}
}
