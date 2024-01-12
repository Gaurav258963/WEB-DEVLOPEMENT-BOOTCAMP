import java.util.*;
public class useeinputoutput {
   
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Radius of Circle:=");
        int radius = sc.nextInt();
        double pi = 3.142;
        double area = pi*radius*radius;
        System.out.println("The Area of Circle:=" +area);
    sc.close();

    }
}
