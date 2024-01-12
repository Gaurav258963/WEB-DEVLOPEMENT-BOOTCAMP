import java.util.*;
public class cordinategeo {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The value of x:");
        int x=sc.nextInt();
         System.out.print("Enter The value of y:");
        int y=sc.nextInt();
         System.out.print("Enter The value of Radius:");
        int Radius=sc.nextInt();
         System.out.print("Enter the value of x1:");
        int x1 = sc.nextInt();
        System.out.print("Enter the value of y1:");
        int y1 = sc.nextInt();
        int OA = (x1-x)+(y1-y);
        if(OA==Radius)
        System.out.println("on the Circle");
        if(OA>Radius)
         System.out.println("Outside the Circle ");
         else
        System.out.println("Onside the circle");
        sc.close();
    }
}
