public class question22 {

    public static void main(String[] args) {
        // for loop
        int[] arr = { 10, 15, 34, 56, 78 };
        for (int i = 0; i < 5; i++) {
            System.out.println(arr[i]);
        }
        // for each loop
        for (int arrs : arr) {
            System.out.println(arrs);

        }
        // while loops
        int i = 0;
        while (i < 5) {
            System.out.println(arr[i]);
            ++i;
        }

    }
}
