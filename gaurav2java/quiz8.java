import java.util.*;

public class quiz8 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number of x:");
        int x = sc.nextInt();
        if (x % 5 == 0)
            System.out.println("The Number is Divisible by 5");
        else
            System.out.println("The Number is Not Divisible by 5");
            sc.close();

    }
}
