import java.util.*;
public class searchingindexArray {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Searching Index:");
        int size = sc.nextInt();
        int numbers[] = new int[size];
       // output
        for(int i = 0; i<size; i++){
        numbers[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        //input
        for(int i = 0; i<numbers.length; i++){
            if(numbers[i] == x) {
           System.out.println("x found the Index : " + i);
    sc.close();


            }

        }


        }
        
    }

