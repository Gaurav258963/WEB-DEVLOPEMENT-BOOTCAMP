import java.util.*;

public class TakinginputArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The size Of Array:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter The "+n+" Element");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}

