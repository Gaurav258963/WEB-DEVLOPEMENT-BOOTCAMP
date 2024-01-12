
import java.util.*;
public class profitandloss {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter The Nmber of cp:");
        int cp = sc.nextInt();
        System.out.print("Enter The Number of sp:");
        int sp = sc.nextInt();
        //int profit = sp-cp;
       // System.out.println("Enter The Profit Value is:" +profit);
       // int loss = cp-sp;
       // System.out.println("Enter The loss Value is:" +loss);
       if(sp>cp){
        System.out.print("You Profit is: ");
        System.out.println(sp-cp);
       }
       if(cp>sp){
        System.out.print("You loss is:");
        System.out.println(cp-sp);
    sc.close();

       }
        

    }

    
}
