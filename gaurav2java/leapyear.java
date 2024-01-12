import java.util.*;
public class leapyear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Year:");
        int x = sc.nextInt();
        if(x%4 ==0)
        System.out.println("The Year of Value Is Leap Year");
        else
        System.out.println("The Year of Value Is Not Leap Year ");
        sc.close();
    }
    

}
