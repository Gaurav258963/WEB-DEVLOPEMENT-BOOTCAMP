

public class Pattern10 {
    public static void main(String[] args) {
        int n = 5;
        // uppper half
        for (int i = 1; i <= n; i++) {
            // 1st Part
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            // Spaces
            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }
            // 2nd Part
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        // Lower Part
        for (int i = n; i >= 1; i--) {
            // 1st Part[

            for (int j = 1; j <= i; j++) {
                System.out.print("*");

            }
            int spaces = 2 * (n - i);
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");

            }
            // 2nd Part
            for (int j = 1; j <= i; j++) {
                System.out.print("*");

            }
            System.out.println();
        }

    }
}
