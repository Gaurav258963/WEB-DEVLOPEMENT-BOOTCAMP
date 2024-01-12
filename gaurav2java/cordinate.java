import java.util.*;
public class cordinate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Axis of x is:");
        int x = sc.nextInt();
         x = 0;
         
        System.out.print("Enter The Axis of y is:");
         int y = sc.nextInt();
          y =0;
       if(x==0 && y == 0)
       System.out.println("The point Is origin");
       
       if (x==0);{

       
          System.out.println("The Point Lies in y-axis");
    }
         if (y ==0)
    
        System.out.println("The Point Lies in x-axis");
        
        sc.close();
    }
}



