import java.util.*;
public class question26 {
    public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     System.out.print("Enter The Row : ");
     int row = sc.nextInt();
     System.out.print("Enter the cols :");
     int cols = sc.nextInt();

     int [][] numbers = new int[row][cols];

     for(int i = 0; i<row; i++){
        for(int j = 0; j<cols; j++){
            numbers[i][j] = sc.nextInt();
        }

     }
     int x = sc.nextInt();
     
     for(int i = 0; i<row; i++){
        for(int j = 0; j<cols; j++){
            if(numbers[i][j] == x){
                System.out.println("x founded of location ("+  i + " ," + j +")");
    sc.close();


            }
        }

     }



     
    }
    
}
