import java.util.Scanner;

class test{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a= sc.next();
        int max_count=0;
        int count=0;
        int flag=1;
        for(int i=0;i<a.length();i++){
            if(a.charAt(i)=='1')count++;
            else if(a.charAt(i)=='0'){
                if (flag==1){
                    count++;
                    flag=0;
                }
                else {
                    flag=1;
                    if(max_count<count)max_count=count;
                    count=0;
                }
            }
        }

        if(max_count<count)max_count=count;

        System.out.print(max_count);
        sc.close();
    }
}